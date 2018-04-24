/************************
	Author:We Can Cross It (Nicanor Gordon, Romain Jones, Romario Maxwell, Ian Smith)
	Date: January 14, 2013
	Description: Call Centre Simulation
************************/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#pragma warning(disable: 4013)
#pragma warning(disable: 4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#include "graphics.h"
#include "records.h"
#include "date.h"
#include "password.h"
#include "queue.h"
#include "Call Menu.h"
#include "Management.h"

//CHANGE OUTAGE.DAT TO Outage.dat
//ALL FILE ERROR HANDLING NEEDS TO BE TAKEN CARE OF

//When someone is disconnected they do not have a pay by date
int main(void) //SYSTEM SHOULD NOT BE ABLE TO BE SHUT DOWN WHILE THERE ARE USERS WHO HAVE NOT BEEN DEALT WITH
{
	int end = 0, userCode;
	
	Account a = {0}; //EDIT

	srand(time(NULL));
	
	system("title TBlacks Electric Company (TBEC)");
	
	if(systemActivities() == -1)
	{
		return -9999;
	}

	do
	{
		system("cls");
		/*puts("\nEnter activity");
		fflush(stdin);scanf("%i",&userCode);*/
		switch(login(&a)) //ONLY SYSTEM MANAGERS SHOULD BE ABLE TO TURN ON THIS SYSTEM
		{ //ONLY ADMINS CAN USE THIS FUNCTION
			case 0:
				system("cls");
				loginExhaust();
				return -1;
				break;
			
			case 1:
				system("cls");
				prohibited();
				_getch();
				return 1;
				break;
			
			case 2:
				system("cls");

				accessGranted();

				Sleep(3000);

				system("cls");

				firstMenu();

				fflush(stdin);
				scanf("%i", &userCode);
				fflush(stdin);
				system("cls");
				switch(userCode)
				{
					case 1:
						updateActive(1); //Change MainMenu return values
						end = MainMenu(); //SHOULD PASS CUSTOMER SERVICE REPRESENTATIVE
						updateActive(0);
						break;
					case 2:
						end = Management(a); //SHOULD PASS MANAGEMENT LEVEL
						break;
				}
				break;
		}
	}while(end == 2);

	return 0;
}