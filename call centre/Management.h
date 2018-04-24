int Management();
void displayOptions();
void createAccount();
void modifyAccount(Account);
void billCustomer();
void makeSectors();
void readPaymentsFile();
void makeOutage();
void updateBalances();
Customer createCustomerAccount();
void updatePaymentDates();
void acceptPayments();
void CustomerAction ();
void connectCustomer();
void viewCallLog();
void viewDisconnectFile(); //After viewing, file is destroyed

//DIALOG BOXES
void firstMenu(void)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("1\t=>\tCall Centre System"); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("2\t=>\tManagement Activities"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("-----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(17); printf("Choice? "); blankSpaces(16); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(41);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    MENU               "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(46, 13);
}

void accWriteFileSuccess(void)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Account successfully written to file."); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Press any key to continue...     "); blankSpaces(4); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              ACCOUNT CREATION         "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(54, 10);
}

void accWriteFileFail(void)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Account not written to file.         "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Contact system admin.                "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Press any key to end program...  "); blankSpaces(4); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    ERROR              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(54, 10);
}

void outageFileFail(void)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Outage could not be added to file.   "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    ERROR              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(54, 10);
}

void outageFileSuccess(void)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Outage successfully added to file.   "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    SUCCESS              "); blankSpaces(7); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(64, 10);
}

void findCustFail(char *key)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("No customer record found.            "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("You searched:"); blankSpaces(24); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf(""); blankSpaces(37); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Want to exit this menu? Y/N     "); blankSpaces(5); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    ERROR              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(0, 13);
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\"%s\"", key); blankSpaces(0); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");

	SetConsoleTextAttribute(h, 113);

	gotoxy(51, 16);
}


//************************************************************

int Management(Account a)
{
	int choice,returnVal;

	do
	{
		system("cls");
		returnVal=0;
		displayOptions();
		fflush(stdin);
		scanf("%i",&choice);
		fflush(stdin);

		system("cls");
		switch(choice)
		{
			case 1:
				createAccount();
				break;
			case 2:
				modifyAccount(a); //PROVIDE A WAY FOR THIS NOT TO BE THE ACCOUNT CURRENTLY IN USE
				break;
			case 3:
				CustomerAction();
				break;
			case 4:
				createRates();
				break;
			case 5:
				viewCallLog();
				break;
			case 6:
				makeOutage();
				break;
			case 7:
				viewDisconnectFile();
				break;
			case 77:
				returnVal=1; //Exit program
				break;
			case 99:
				returnVal=2; //Logout
				break;
			default:
				puts("\nInvalid input, try again");
				Sleep(2500);
				break;
		}
	}while(!returnVal);
	return returnVal;
}

void viewDisconnectFile()
{

}


void showCallLog(Call callArray[], int length)
{
	int i;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	char status[15];
	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;
	system("color 60");
	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;


	SetConsoleTextAttribute(h, 116); printf("Call ID |"); printf(" Cust ID|"); printf(" Agent ID|"); printf(" Call Start Time|"); printf(" Call End Time|"); printf(" Complete Status \n");
	makeDashes(38); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED ); blankSpaces(2); printf("\n");

	for(i = 0; i < length; i++)
	{
		if(callArray[i].complete == True)
		{
			strcpy(status,"Complete");
		}
		else
		{
			strcpy(status,"Incomplete");
		}
	
		SetConsoleTextAttribute(h, 112); printf("%s |", callArray[i].callID); printf(" %s  |", strcmp("-9999",callArray[i].custID)==0 ? "Invalid" : callArray[i].callID); printf(" %s   |", strcmp("-999", callArray[i].agentID)==0 ? "System": callArray[i].agentID); printf(" %02i:",callArray[i].start.tm_hour); printf("%02i:",callArray[i].start.tm_min); printf("%02i       |", callArray[i].start.tm_sec); printf(" %02i:",callArray[i].end.tm_hour); printf("%02i:",callArray[i].end.tm_min); printf("%02i     |", callArray[i].end.tm_sec); printf(" %s", status);blankSpaces(16 - strlen(status)); SetConsoleTextAttribute(h, BACKGROUND_RED ); blankSpaces(2); printf("\n");
		SetConsoleTextAttribute(h, 112); blankSpaces(77); SetConsoleTextAttribute(h, BACKGROUND_RED ); blankSpaces(2); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED ); blankSpaces(78);
	}
}


void viewCallLog()
{
	FILE *fp;
	Call c[150];
	int i;

	if((fp=fopen("Call log.dat","rb"))==NULL)
	{
	}
	else
	{
		i=0;
		fseek(fp,0,SEEK_SET);
		while(!feof(fp))
		{
			fseek(fp,sizeof(Call)*i,SEEK_SET);
			fread(&c[i],sizeof(Call),1,fp);
			i++;
		}
		fclose(fp);

		showCallLog(c,i);
		_getch();
	}
}

void connectCustomer()
{
	char custID[6];
	Customer cust;
	int pos;

	cust=retrieveCustomer(pos=searchCustomer(custID));

	if(cust.connected)
	{
		puts("Customer already connected");
	}
	else
	{
		if(cust.balance<0)
		{
			puts("Customer must clear all outstanding balances before reconnection");
			puts("You will now be taken to the main menu");
		}
		else
		{
			cust.connected=True;
			rewriteCustomer(cust,pos);
			puts("Customer reconnected to system");
		}
	}
	Sleep(2000);
}

void modifyAccount(Account a)//Come back to this when I feel like it
{
	char ID[5];
	puts("Enter ID of account you would like to edit");
	fflush(stdin);gets(a.ID);

	//SUCCESS BLAH BLAH

	puts("Revoke Privilges (1)");
	puts("Make Administrator (2)");
	puts("Make Regular (3)");
	puts("Change Password (4)");//can be done on any account


}

float calculateBill(Bill *b)
{
	int i=0,temp=0;
	float total=0.0;
	systemFile sys;

	sys=retrieveRates();

	while(b->usage > sys.bracket[i].minimum && sys.bracket[i].maximum!=-1)
	{
		temp = b->usage - sys.bracket[i].maximum;

		if(temp > (sys.bracket[i].maximum - sys.bracket[i].minimum))
		{
			total+= (sys.bracket[i].maximum - sys.bracket[i].minimum) * sys.bracket[i].rate;
		}
		else
		{
			total+= temp * sys.bracket[i].rate;
		}
		i++;
	}
	
	if( sys.bracket[i].maximum==-1)
	{
		total+=temp * sys.bracket[i].rate;
	}

	b->cost=total;
	return total;
}

void billCustomer()//CANT BILL CUSTOMER UNTIL due date on bill or if customer disconnected
{
	char custID[6];
	Customer cust;
	int reading,pos;
	Bill b;
	boolean loop=False;
	struct tm today;

	today=*(curTime());
	do
	{
		if(loop)
		{
			puts("Invalid customer ID");
		}
		loop=True;

		puts("\nEnter customer ID");
		fflush(stdin);gets(custID);
		pos=searchCustomer(custID);
	}while(pos<0);

	cust=retrieveCustomer(pos);

	if(cust.payBy.tm_year!=-1)//cannot disconnect a customer that has been disconnected
	{
		if(diffStructTm(today,cust.payBy)>0)//If previous bill has not been paid by the date, they will be disconnected
		{	
			if(cust.connected)
			{
				cust.connected=False;
				cust.balance-=retrieveRates().setup;//Customer disconnected, if they want to be reconnected they must pay connection fee
			}
		}
	}
	else
	{
		do
		{
			printf("\nLast meter reading %i",cust.lastReading);
			puts("\nEnter current meter reading");
			fflush(stdin);scanf("%i",&reading);
			fflush(stdin);
		}while(reading<cust.lastReading);

		b.usage=reading-cust.lastReading;

		cust.lastReading=reading;
		
		calculateBill(&b);

		cust.balance-= b.cost;
		cust.leastAmount= 0.1 *(cust.balance);

		cust.payBy=*futureDate(today.tm_mday,today.tm_mday+1,today.tm_year+1900,15);//Bills must be paid after 15 days
	}

	b.debts= 0 - cust.balance;

	puts("\nService charge for customer");
	fflush(stdin);scanf("%f",&b.service);
	fflush(stdin);	
		
	cust.balance-= b.service;
			
	b.start=cust.lastDate;
	b.end=today;

	cust.b=b;

	cust.lastDate=b.end;
	rewriteCustomer(cust,pos);

	puts("Customer bill calculated");
	Sleep(1500);
}

void displayOptions()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("1\t=>\tCreate Account    "); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("3\t=>\tCustomer Actions  "); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("4\t=>\tEdit Rates           "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("5\t=>\tView Call Log"); blankSpaces(8); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("6\t=>\tMake Outage       "); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("77\t=>\tExit              "); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("99\t=>\tLogout               "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("-----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(17); printf("Choice? "); blankSpaces(16); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(41);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
	
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              MANAGEMENT ACTIVITIES    "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(45, 28);
}

void CustomerAction()
{
	int choice;
	char custID[6];
	boolean loop=False;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("cls & color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("1\t=>\tAccept Payments   "); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("2\t=>\tAdd Customer         "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("3\t=>\tUpdate Payment Dates"); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("4\t=>\tCustomer Search      "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("5\t=>\tBill Customer     "); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("6\t=>\tAdd Card             "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("7\t=>\tReconnect Customer   "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("8\t=>\tLeave                "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("-----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(17); printf("Choice? "); blankSpaces(16); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(41);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                 CUSTOMER ACTIONS      "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(46, 31);

	fflush(stdin);
	scanf("%i",&choice);
	fflush(stdin);

	system("cls");
	switch(choice)
	{
		case 6:
			do
			{
				if(loop)
				{
					system("cls");
					puts("Invalid customer ID");
				}
				loop=True;
				puts("Enter Customer ID number");
				fflush(stdin);gets(custID);
			}while(searchCustomer(custID)==-1);
			addCard(custID);
			break;
		case 7:
			connectCustomer();
			break;
		case 5:
			billCustomer();
			break;
		case 1:
			acceptPayments(); //BOUNCED CARDS & PAYMENTS AT PHYSICAL OUTLETS
			break;
		case 2:
			addCustomer(createCustomerAccount());//WRITE TO FILE AFTER COMPLETE
			break;
		case 3:
			updatePaymentDates();//change deadlines for payment
			//extend 
			break;
		case 4:
			ViewCustomerRec();
			break;
		default:
			return;
	}
}

void createAccount()
{
	FILE *fp;
	
	Account a;
	
	int ID, size, j;
	
	char pass[21];
	
	boolean loop = False;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	ID = rand()% 9000 + 1000;
	sprintf(a.ID, "%i", ID);

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Write down your user ID: %s", a.ID); blankSpaces(12); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("CREATE USERNAME: "); blankSpaces(24); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("CREATE PASSWORD: "); blankSpaces(24); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("RE-ENTER PASSWORD: "); blankSpaces(22); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("ADMIN? Y/N:        "); blankSpaces(22); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                   "); blankSpaces(22); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

	SetConsoleTextAttribute(h, 113);
	
	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              ACCOUNT CREATION         "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);
	
	gotoxy(40, 10);
	
	fflush(stdin);
	gets(a.name);
	fflush(stdin);

	a.name[0] = toupper(a.name[0]);

	makeLower(&a.name[1]);

	do
	{
		gotoxy(40, 13);
		getPassword(a.pass);

		gotoxy(42, 16);
		getPassword(pass);
			
		if(strcmp(a.pass, pass) != 0)
		{
			gotoxy(42, 16);
			for(j = strlen(pass); j > 0; j--)
			{
				printf(" ");
			}

			gotoxy(40, 13);
			for(j = strlen(a.pass); j > 0; j--)
			{
				printf(" ");
			}
				
			gotoxy(1,1);
			
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("       INCORRECT PASSWORD ENTERED      "); blankSpaces(9); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

			SetConsoleTextAttribute(h, 113);
		}

		gotoxy(40, 13);
	}while(strcmp(a.pass, pass) != 0); //password validation

	SetConsoleTextAttribute(h, 113);
	
	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              ACCOUNT CREATION         "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(35, 19);
	
	if('Y' == toupper(getchar()))
	{
		a.clearance = 1;
		gotoxy(0, 22);
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("This account has administrator privileges"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	}
	else
	{
		a.clearance = 0;
		gotoxy(0, 22);
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("This account has regular privileges.     "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	}

	_getch();
	if((fp = fopen("System.dat", "rb+")) == NULL)
	{
		system("cls");
		accWriteFileFail();
		getch();
		exit(EXIT_FAILURE);
	}
	else
	{
		fread(&size, sizeof(int), 1, fp);
		fseek(fp, sizeof(int) + size * (sizeof(Account)), SEEK_SET);
		fwrite(&a, sizeof(Account), 1, fp);
		fseek(fp, 0, SEEK_SET);
		size++;
		fwrite(&size, sizeof(int), 1, fp);
		fclose(fp);

		system("cls");
		accWriteFileSuccess();
		_getch();
	}
}

void removeAccount(Account a)
{
}
void newSector(Sector s)
{
	FILE *fp;
	int size;
	if((fp=fopen("Sector.dat","rb+"))==NULL)
	{
	}
	else
	{
		fseek(fp,0,SEEK_SET);
		fread(&size,sizeof(Sector),1,fp);

		fseek(fp,sizeof(int) + size*sizeof(Sector),SEEK_SET);
		fwrite(&s,sizeof(Sector),1,fp);

		size++;
		fseek(fp,0,SEEK_SET);
		fwrite(&size,sizeof(int),1,fp);
	}
	fclose(fp);
}
//void makeSectors()//Should be modified in a way that the ID is passed to this function so both createSector and editSector would be this function
//{
//	Sector s;
//	int ID,i,temp;
//	boolean loop=False;
//
//	ID= rand()%900 + 100;
//	sprintf(s.ID,"%i",ID);
//
//	printf("\nID number of sector is %s",s.ID);
//	_getch();
//	puts("\nName of sector");
//	
//	fflush(stdin);gets(s.name);
//
//
//
//
//	newSector(s);
//}
void updatePaymentDates()//EXTENSIONS & OPPOSITE
{
	char custID[10];
	Customer cust;
	int pos,d,m,y;
	boolean loop=False;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	char status[15];
	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	do
	{
		do
		{
			if(loop)
			{
				system("cls");
				findCustFail(custID);
				if(toupper(getchar()) == 'Y')
				{
					return;
				}			
			}

			system("cls & color 85");

			GetConsoleScreenBufferInfo(h, &typScrApp);
			typConsoleApp = typScrApp.wAttributes;

			blankLines(5);
	
			blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Customer ID:     "); blankSpaces(24); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(4); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("New Payment Date          "); blankSpaces(15); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(4); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tYear: "); blankSpaces(26); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tMonth: "); blankSpaces(25); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tDay:        "); blankSpaces(20); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

			SetConsoleTextAttribute(h, 113);
	
			gotoxy(1,1);
			
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                   PAYMENTS                "); blankSpaces(5); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

			SetConsoleTextAttribute(h, 113);

			gotoxy(36, 7);
			fflush(stdin);
			gets(custID);
			fflush(stdin);

			cust= retrieveCustomer(pos=searchCustomer(custID));
			loop=True;
		}while(pos<0);

		if(!cust.connected)
		{
			system("cls & color 85");

			GetConsoleScreenBufferInfo(h, &typScrApp);
			typConsoleApp = typScrApp.wAttributes;

			blankLines(5);
	
			blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Customer disconnected.               "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Search for a different customer? Y/N "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

			SetConsoleTextAttribute(h, 113);

			gotoxy(1,1);
			
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                PAYMENTS               "); blankSpaces(9); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

			SetConsoleTextAttribute(h, 113);

			gotoxy(54, 10);
			
			if(toupper(getchar())=='Y')
			{
				continue;
			}
			else
			{
				return;
			}
		}
	}while(0);

	loop=False;
	do
	{
		if(loop)
		{
			puts("Date is invalid");
		}
		gotoxy(38, 14);
		fflush(stdin);
		scanf("%i",&y);
		fflush(stdin);

		gotoxy(39, 17);
		scanf("%i",&m);
		fflush(stdin);

		gotoxy(37, 20);
		scanf("%i",&d);
		fflush(stdin);
		loop=True;
	}while(!valDate(d,m,y) || (y<=cust.payBy.tm_year+1900 && m<= cust.payBy.tm_mon + 1 && d<=cust.payBy.tm_mday) );

	cust.payBy.tm_year=y-1900;
	cust.payBy.tm_mon=m-1;
	cust.payBy.tm_mday=d;
	

	rewriteCustomer(cust,pos);

	system("cls & color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Payment date successfully amended.   "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Pres any key to return to menu.      "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    SUCCESS            "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(54, 10);

	_getch();
}


int validateOutage(Outage outages[],Outage o, int length)
{
	int i;
	for(i = 0; i < length; i++)
	{
		if((strcpy(outages[i].region,o.region) == 0) 
			&& diffStructTm(outages[i].end, o.start)<=0)//If new outage starts before the end of an outage then it is senseless
		{
			return 0;
		}
		if((strcpy(outages[i].region,o.region) == 0) 
			&& diffStructTm(outages[i].start, o.end) > 0)//If new outage ends after the start of an outage the it is senseless
		{
			return 0;
		}
	}
	outages[length] = o;
	return 1;
}

void tmSwap(Outage outage[], int index)
{
	Outage swap;

	swap = outage[index];
	outage[index] = outage[index + 1];
	outage[index + 1] = swap;

}

void sortOutages(Outage o[], int size)
{
	int i, j;

	for(i = 0; i < size - 1 ; i++)
	{
		for(j = 0; j < size - 1; j++)//could be made more efficient but it functions
		{
			if(diffStructTm(o[j].start,o[j+1].start)<0)//if 2nd is before 1st, negative number will be returned
			{
				tmSwap(o,j);
			}
		}
	}
}

int writeOutage(Outage o)
{
	FILE *fp;
	Outage outages[50];
	int i,size;

	if((fp=fopen("Outage.dat","rb"))==NULL)
	{

	}
	else
	{
		fseek(fp,0,SEEK_SET);
		fread(&size,sizeof(int),1,fp);

		for(i=0;i<size;i++)//OUTAGES ARE SORTED BY START TIME
		{
			fseek(fp,sizeof(int) + i * sizeof(Outage),SEEK_SET);
			fread(&outages[i],sizeof(Outage),1,fp);
		}
		fclose(fp);
		if(validateOutage(outages,o,size)==0)
		{
			return 0;
		}
		else
		{
			size++;
			sortOutages(outages,size);				
		}
	}

	if((fp=fopen("Outage.dat","wb"))==NULL)
	{
	}
	else
	{
		fwrite(&size,sizeof(int),1,fp);
		for(i=0;i<size;i++)
		{
			fseek(fp,sizeof(int) + sizeof(Outage)*i,SEEK_SET);
			fwrite(&outages[i],sizeof(Outage),1,fp);
		}
		fclose(fp);
		return 1;
	}
}

void makeOutage()
{
	Outage o;
	boolean loop=False;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	do
	{
		if(loop)
		{
			system("cls");
			puts("\nThe start date must be after the end date");
		}

		system("color 85");

		GetConsoleScreenBufferInfo(h, &typScrApp);
		typConsoleApp = typScrApp.wAttributes;

		blankLines(5);
	
		blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Start Date"); blankSpaces(31); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("--------------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tHour: "); blankSpaces(26); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("\t\t(24hr)                          "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tYear: "); blankSpaces(26); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tMonth: "); blankSpaces(25); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tDay:        "); blankSpaces(20); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

		SetConsoleTextAttribute(h, 113);
	
		gotoxy(1,1);
			
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  MAKE OUTAGE              "); blankSpaces(5); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);
		do
		{
			gotoxy(38, 10);
			fflush(stdin);
			scanf("%i", &o.start.tm_hour);
			fflush(stdin);

			o.start.tm_min = 0;
			gotoxy(38, 10);
		}while(o.start.tm_hour>23 || o.start.tm_hour<0);
		
		gotoxy(1,1);
			
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  MAKE OUTAGE              "); blankSpaces(5); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);

		do
		{
			gotoxy(38, 14);
			fflush(stdin);
			scanf("%i", &o.start.tm_year);
			fflush(stdin);
			o.start.tm_year += -1900;
			
			gotoxy(39, 17);
			fflush(stdin);
			scanf("%i", &o.start.tm_mon);
			fflush(stdin);
			o.start.tm_mon += -1;
			
			gotoxy(37, 20);
			fflush(stdin);
			scanf("%i", &o.start.tm_mday);
			fflush(stdin);
		}while(valDate(o.start.tm_mday,o.start.tm_mon + 1, o.start.tm_year + 1900)==0);


		system("cls & color 85");

		GetConsoleScreenBufferInfo(h, &typScrApp);
		typConsoleApp = typScrApp.wAttributes;

		blankLines(5);
	
		blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("End Date"); blankSpaces(33); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("--------------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tHour: "); blankSpaces(26); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("\t\t(24hr)                          "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tYear: "); blankSpaces(26); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tMonth: "); blankSpaces(25); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tDay:        "); blankSpaces(20); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

		SetConsoleTextAttribute(h, 113);
	
		gotoxy(1,1);
			
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  MAKE OUTAGE              "); blankSpaces(5); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);
		do
		{
			gotoxy(38, 10);
			fflush(stdin);
			scanf("%i", &o.end.tm_hour);
			fflush(stdin);

			o.end.tm_min = 0;
			gotoxy(38, 10);
		}while(o.end.tm_hour>23 || o.end.tm_hour<0);

		gotoxy(1,1);

		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  MAKE OUTAGE              "); blankSpaces(5); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);

		loop=False;
		do
		{
			if(loop)
			{
				gotoxy(1,1);

				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  INVALID DATE              "); blankSpaces(5); printf("\n");
				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

				SetConsoleTextAttribute(h, 113);
			}
			gotoxy(38, 14);
			fflush(stdin);scanf("%i", &o.end.tm_year);
			fflush(stdin);
			o.end.tm_year += -1900;
			
			gotoxy(39, 17);
			fflush(stdin);
			scanf("%i", &o.end.tm_mon);
			fflush(stdin);
			o.end.tm_mon += -1;
			
			gotoxy(37, 20);
			fflush(stdin);
			scanf("%i", &o.end.tm_mday);
			fflush(stdin);
		}while(valDate(o.end.tm_mday,o.end.tm_mon + 1, o.end.tm_year + 1900)==0);

		loop=True;
	}while(diffStructTm(o.start,o.end)>0);

	system("cls & color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Affected Regions:"); blankSpaces(24); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("--------------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

	SetConsoleTextAttribute(h, 113);
	
	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  MAKE OUTAGE              "); blankSpaces(5); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(25, 10);
	fflush(stdin);
	gets(o.region);
	fflush(stdin);

	if( writeOutage(o)==1)
	{
		system("cls");
		outageFileSuccess();
		Sleep(2500);
	}
	else
	{
		system("cls");
		outageFileFail();
		Sleep(2500);
	}
	Sleep(1500);
}

void acceptPayments() //DONE
{
	struct tm today;
	char custID[100];
	boolean loop=False;
	int pos;
	Customer cust;
	float amount;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	char status[15];
	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	do
	{
		if(loop)
		{
			system("cls");
			findCustFail(custID);
			if(toupper(getchar()) == 'Y')
			{
				return;
			}
		}
		loop=True;
		system("cls & color 85");

		GetConsoleScreenBufferInfo(h, &typScrApp);
		typConsoleApp = typScrApp.wAttributes;

		blankLines(5);
	
		blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Customer ID:     "); blankSpaces(24); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter amount received:  "); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

		SetConsoleTextAttribute(h, 113);
	
		gotoxy(1,1);
			
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  PAYMENTS                 "); blankSpaces(5); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);

		gotoxy(36, 7);
		fflush(stdin);
		gets(custID);
		fflush(stdin);
	}while((pos=searchCustomer(custID))==-1);

	cust=retrieveCustomer(pos);

	gotoxy(46, 10);
	fflush(stdin);
	scanf("%i",&amount);
	fflush(stdin);

	cust.balance+=amount;

	if(cust.balance>cust.leastAmount)//THIS IS CORRECT
	{
		cust.payBy.tm_year=-1;
	}

	if(amount<0)
	{
		today=*curTime();
		cust.payBy = *futureDate(today.tm_mday,today.tm_mon+1,today.tm_year+1900,15);
	}

	rewriteCustomer(cust,pos);
	system("cls & color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Customer balance successfully updated."); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

	SetConsoleTextAttribute(h, 113);
	
	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  SUCCESS                  "); blankSpaces(5); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(55, 10);
	Sleep(2000);
}