/************************
	Author:We Can Cross It (Nicanor Gordon, Romain Jones, Romario Maxwell, Ian Smith
	Date:November 26, 2013
	Description:Call Centre Simulation
************************/
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "records.h"
#include "password.h"


#pragma warning(disable:4996)

//typedef struct Address
//{
//	char streetAddress[50];
//	char city[20];
//	char adminDiv[15];
//	char country[20];
//	char sectID[4];//RELEVANT TO CUSTOMER WHEN PAYING BILLS
//}Address;
//typedef enum EmergType {FIRE, LINESDOWN} EmergType;
//typedef struct Emergency
//{
//	EmergType type;
//	int urgency;//these two are linked ??
//	Address address;
//	struct tm incident;
//}Emergency;
//
//typedef struct Call
//{
//	char callID[10];
//	struct tm start;
//	struct tm agentStart;
//	time_t duration;
//	char fName[20];
//	char lName[20];
//	char custID[10];
//	char agentID[10];
//	boolean satisfied;
//	Emergency e;
//}Call;
//extern Call emptyCall ={0};

Address createAddress()//review purpose
{
	Address address;

	puts("Street Address:");
	fflush(stdin);
	gets(address.streetAddress);
	puts("City:");
	fflush(stdin);
	gets(address.city);
	puts("Parish:");
	fflush(stdin);
	gets(address.adminDiv);
	puts("Country:");
	fflush(stdin);
	gets(address.country);

	return address;
}

struct tm* curTime(void)
{
	time_t t;
	time(&t);
	return localtime(&t);
}

Call CustomerService(Call c,Account a)//ALLOW FOR UNEXPECTED TERMINATION
{
	strcpy(c.agentID,a.ID);

	puts("A customer service agent is now with you");
	c.agentStart=*(curTime());
	c.e.incident=c.agentStart;

	c.e.incident=*(curTime());
	puts("Description of your emergency please.");
	fflush(stdin);
	gets(c.e.description);
	
	puts("Location of incident");
	c.e.address=createAddress();
	
	
	c.end=*(curTime());
	c.complete=True;
	return c;
}

int logCall(Call c)
{
	FILE *call,*emerg;

	if((call=fopen("Call log.dat","ab"))==NULL)
	{
		puts("WRITING TO FILE FAILURE, PLEASE TRY AGAIN");
		system("pause");
		return -1;
	}
	else
	{//ASK MAXWELL HOW TO LOG FILES
		fwrite(&c,sizeof(Call),1,call);
		fclose(call);
	}

	if((emerg=fopen("Emergency.txt","a"))==NULL)
	{
	}
	else
	{
		c.e.address.adminDiv[strlen(c.e.address.adminDiv)]='\n';
		c.e.address.city[strlen(c.e.address.city)]='\n';
		c.e.address.country[strlen(c.e.address.country)]='\n';
		c.e.address.streetAddress[strlen(c.e.address.streetAddress)]='\n';
		c.e.description[strlen(c.e.description)]='\n';
		fprintf(emerg,"%s\n",c.callID);
		fputs(c.e.description,emerg);		
		fputs(c.e.address.streetAddress,emerg);
		fputs(c.e.address.city,emerg);
		fputs(c.e.address.adminDiv,emerg);
		fputs(c.e.address.country,emerg);
		fprintf(emerg,"%i %i %i %i %i %i %i %i %i\n",c.e.incident.tm_hour,c.e.incident.tm_isdst,c.e.incident.tm_mday,c.e.incident.tm_min,c.e.incident.tm_mon,c.e.incident.tm_sec,c.e.incident.tm_wday,c.e.incident.tm_yday,c.e.incident.tm_year);
		fclose(emerg);
	}
}

Call popCall()//Should be designed in such a way that two agents cannot access the file simultaneously
{
	Call temp,pop=emptyCall;
	FILE *call;
	int size,i;

	//if((line=fopen("CallLines.txt","rb"))==NULL)
	//{

	//}
	//else
	//{
	//	fseek(line,0,SEEK_SET);
	//	fread(&state,sizeof(int),1,line);

	//	fclose(line);
	//	if(state==0)
	//	{
	//		return emptyCall;
	//	}
	//}

	if((call=fopen("Call.dat","rb+"))==NULL)
	{
	}
	else
	{
		fseek(call,0,SEEK_SET);
		fread(&size,sizeof(int),1,call);

		if(size!=0)
		{		
			for(i=0;i<size;i++)
			{
				fseek(call,sizeof(int)+ sizeof(Call)*i,SEEK_SET);
				fread(&temp,sizeof(Call),1,call); 
				if(i==0)
				{
					pop=temp;
				}
				else
				{
					fseek(call,sizeof(int) + sizeof(Call)*(i-1),SEEK_SET);
					fwrite(&temp,sizeof(Call),1,call);
				}
			}
			size--;
			fseek(call,0,SEEK_SET);
			fwrite(&size,sizeof(int),1,call);
			fclose(call);
		}
	}
	return pop;
}

void updateActive(int pos, char ID[])//Change appropriate line to open, on call, or offline
{
	FILE *fp;
	int open=1;

	if((fp=fopen("CallLines.dat","rb"))==NULL)
	{

	}
	else
	{
		fseek(fp,sizeof(int) + pos *(sizeof(int) + sizeof(char)*5),SEEK_SET);
		fwrite(&open,sizeof(int),1,fp);
		fwrite(&ID,sizeof(char),5,fp);
		fclose(fp);
	}
}

void changeLineState(int pos,int state)
{
	FILE * fp;
	char ID[5]="0000";

	if((fp=fopen("CallLines.dat","rb"))==NULL)
	{

	}
	else
	{
		fseek(fp,sizeof(int) + pos*(sizeof(int) + sizeof(char)*5),SEEK_SET);
		fwrite(&state,sizeof(int),1,fp);
		if(state==0)
		{
			fwrite(&ID,sizeof(char),5,fp);
		}
		fclose(fp);
	}
}

int main()
{
	int pos,end=0;
	Account a;
	Call call;

	system("color 71 & title TBlacks Electric Company Customer Service");

	switch (login(&a))//IF FIRST TIME ON THIS, THE PROGRAM SHOULD BE CLOSED AND TOLD TO START UP OTHER PROGRAM
	{		
		case 1:
			if(a.clearance==1)
			{
				puts("Application for customer service agents only");
				puts("Closing");
				Sleep(1500);
				return 1;
			}
			//else

			if((pos=availableLine(a.ID))==0)//CAN ONLY LOG ON IF THERE ARE SPACES: 6 SPACES
			{
				puts("Lines are full. Cannot log on to system");
				puts("Closing");
				Sleep(1500);
				return 1;
			}
			//else
			updateActive(pos-1,a.ID);
			do
			{
				system("cls");
				puts("Check for available call (Y) or Log out (N)?");
				
				fflush(stdin);
				if(toupper(getchar())=='N')
				{
					changeLineState(pos-1,0);//OFFLINE
					end=1;
				}
				else
				{
					call=popCall();
					if(strcmp(call.callID,"")!=0)
					{
						changeLineState(pos-1,2);//ONCALL
						call=CustomerService(call,a);//DATA SHOULD BE TRANSFERRED TO OTHER PROGRAM
						logCall(call);		
						changeLineState(pos-1,1);//OPEN
					}
					else
					{
						puts("No available calls");
						_getch();
					}
				}
			}while(end==0);
			break;
		default:
			puts("Login failure");
			return -99;
	}

	return 0;
}