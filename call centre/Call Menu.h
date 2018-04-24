int systemActivities();
Customer retrieveCustomer(int);
int popCustomers(Customer[]);
void acceptCall(Queue *);
systemFile retrieveRates();
void makeUpper(char []);

//Dialog boxes
void firstTimeFail(void)
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

void custFileReadFail(void)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Customer file read error.            "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Contact system admin.                "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Press any key to continue...  "); blankSpaces(7); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
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

void custSearchFail(char *key)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("No customer record with that surname."); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("You searched:"); blankSpaces(24); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf(""); blankSpaces(37); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Press any key to continue...  "); blankSpaces(7); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
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

	gotoxy(54, 16);
}

void firstTimeDialogBox(void)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("First time using the system? Y/N     "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                                 "); blankSpaces(4); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                   SET UP              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(23, 10);
}

void setupSuccess(void)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("System setup successfully completed. "); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                                 "); blankSpaces(4); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                   SET UP              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(60, 10);
}

void menu1(void)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter \'CALL\' to answer incoming call"); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter 1 to log out"); blankSpaces(19); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter 9 to exit"); blankSpaces(22); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(17); printf("Choice? "); blankSpaces(15); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("               CALL CENTRE SYSTEM     "); blankSpaces(10); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(46, 16);
}

void menu2(void)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter \'CALL\' to answer incoming call"); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter 0 to connect call"); blankSpaces(14); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter 1 to log out"); blankSpaces(19); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter 9 to exit"); blankSpaces(22); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(17); printf("Choice? "); blankSpaces(15); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("               CALL CENTRE SYSTEM     "); blankSpaces(10); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(46, 19);
}

void menu3()
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

//**************************************************************************************************

struct tm convertDateToStruct(Date d)
{
	struct tm t;
	t.tm_mday=d.d;
	t.tm_mon=d.m-1;
	t.tm_year=d.y-1900;

	return t;
}

int compareDate(struct tm first,struct tm second)
{
	int val1, val2;

	val1=first.tm_year * 10000 + (first.tm_mon +1 ) * 100 + first.tm_mday;
	val2=second.tm_year * 10000 + (second.tm_mon +1 ) * 100 + second.tm_mday;

	return val1-val2;//if first is before second then negative is returned, if second is before first then positive is returned
}

int lNameSearch(int found[], char key[])
{
	int i; //counter
	int count=0,size;
	Customer arr[100];

	size=popCustomers(arr);
	//loop through array
	for(i = 0; i < size; ++i)
	{
		if(!strcmp(arr[i].lName, key))
		{
			found[count]=i; //return location of key
			count++;
		}
	}
	found[count]=-1;
	return count; //key not found
}
void custList(Customer *customers, int length)
{
	int i;
	char fullName[50], address[120];
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 80");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);

	SetConsoleTextAttribute(h, 116); blankSpaces(32); printf("CUSTOMER"); blankSpaces(32); printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(32); printf("--------"); blankSpaces(32); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");

	for(i = 0; i < length; i++)
	{
		fflush(stdin);
		
		strcpy(fullName, customers[i].fName);
		strcat(fullName, " ");
		strcat(fullName, customers[i].lName);

		strcpy(address, customers[i].serviceAddress.streetAddress);
		strcat(address, ",");
		strcat(address, " ");
		strcat(address, customers[i].serviceAddress.city);
		
		SetConsoleTextAttribute(h, 116); makeDashes(36); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); printf("Customer ID   |"); printf("%s", customers[i].IDNo); blankSpaces(57 - strlen(customers[i].IDNo)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); makeDashes(36); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); printf("Name          |"); printf("%s", fullName); blankSpaces(57 - strlen(fullName)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
		SetConsoleTextAttribute(h, 116); makeDashes(36); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); printf("Address       |"); printf("%s", address); blankSpaces(57 - strlen(address)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
		SetConsoleTextAttribute(h, 116); makeDashes(36); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); printf("Telephone No. |"); printf("%s", customers[i].tel); blankSpaces(57 - strlen(customers[i].tel)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
		SetConsoleTextAttribute(h, 116); makeDashes(36); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); blankSpaces(32); printf("--------"); blankSpaces(32); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");


	}

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                     RESULTS           "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);
}

void displayCustomer(Customer c)
{//NIC PART
}

void ViewCustomerRec()//Would not Display all customers if not for the design specification; Some information would be given, then user would chose to view more on each customer
{
	char key[20];
	int pos[50],i,size=0;
	Customer c[20];

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Enter customer's surname:          "); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(41); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(41);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  CUSTOMER SEARCH      "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(23, 9);
	
	fflush(stdin);
	gets(key);
	fflush(stdin);
	
	makeUpper(key);
	lNameSearch(pos,key);

	i=0;
	if(pos[i]==-1)
	{
		system("cls");
		custSearchFail(key);
		_getch();
	}
	else
	{
		while(pos[i]!=-1)
		{		
			c[i]=retrieveCustomer(pos[i]);
			size++;
			i++;
		}
		system("cls");
		custList(c,size);
	}
	_getch();
}

void rewriteCustomer(Customer c, int pos)
{
	FILE *fp;

	if((fp=fopen("Customer.dat","rb+"))==NULL)
	{
	}
	else
	{
		fseek(fp,sizeof(int) + pos * sizeof(Customer),SEEK_SET);
		fwrite(&c,sizeof(Customer),1,fp);
		fclose(fp);
	}
}

void makeUpper(char word [])
{
	int i=0;
	while(word[i]!='\0')
	{
		word[i]=toupper(word[i]);
		i++;
	}
}

void makeLower(char word [])
{
	int i=0;
	while(word[i]!='\0')
	{
		word[i]=tolower(word[i]);
		i++;
	}
}

int isNumber(char word [])
{
	int i=0;
	while(word[i]!='\0')
	{
		if(0==isdigit(word[i]))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int isAlpha(char word[])
{
	int i=0;
	while(word[i]!='\0')
	{
		if(0==isalpha(word[i]))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

//int valTelNo(char *tel)//VALIDATE NUMBER, ASK MAXWELL
//{
//	return !strncmp("+1 512", tel, 6) && strspn(tel, " +-0123456789") == 15;
//}

void searchCustLastName(char key[], char ID[][20])
{
	FILE *fp;
	int size,i;

	if((fp=fopen("Customer.dat","rb"))==NULL)
	{
	}
	else
	{
		fseek(fp,0,SEEK_SET);
		fread(&size,sizeof(int),1,fp);

		for(i=0;i<size;i++)
		{

		}
	}
}

Address createAddress()//review purpose
{
	boolean loop=False;
	Address address;

	puts("\nStreet Address:");
	
	fflush(stdin);gets(address.streetAddress);
	puts("\nCity:");
	
	fflush(stdin);gets(address.city);
	puts("\nParish:");
	
	fflush(stdin);gets(address.adminDiv);
	puts("\nCountry:");
	
	fflush(stdin);gets(address.country);

	//if(serviceAddress)
	//{
	//	do
	//	{
	//		if(loop)
	//		{
	//			puts("\nInvalid sector ID, try again.");
	//			puts("\nIs there a sector for this address? Y/N");
	//			if('Y'==toupper(getchar()))
	//			{
	//				return emptyAddress;
	//			}
	//		}
	//		loop=True;
	//		puts("\nSector ID:");
	//		
	//		fflush(stdin);gets(temp);
	//	}while(	searchSector(temp)<0);
	//	strcpy(address.sectID,secID);
	//}

	return address;
}

CC createCard()
{
	CC card;
	boolean loop=False;

	puts("Enter cardholder\'s name");
	fflush(stdin);gets(card.cardholder);

	do
	{
		if(loop)
		{
			system("cls");
			puts("\nEnter card number in format XXXX XXXX XXXX XXXX");
		}
		loop=True;
		puts("\nCredit card number");
		fflush(stdin);gets(card.ccNo);
	}while(strlen(card.ccNo)!=19 /*&& isNumber(card.ccNo)==0*/);//MAXWELL

	loop=False;
	do
	{
		if(loop)
		{
			system("cls");
			puts("\nThe security number must be 3 digits and must be numbers only");
		}
		loop=True;
		puts("\nCredit card authetication code");
			
		fflush(stdin);gets(card.authCode);
	}while(strlen(card.authCode)!=3);
	
	puts("\nEnter Address");

	card.billingAddress=createAddress();

	loop=False;
	do
	{
		if(loop)
		{
			system("cls");
			puts("Date invalid, please try again");
		}
		puts("\nEnter Expiry Date");
		readDate(&card.expiry,-1,-1,-2);//Can enter any credit card data
		loop=True;
	}while(valDate(card.expiry.d,card.expiry.m,card.expiry.y)!=1);

	return card;
}

int searchAddress(Address key)
{
	FILE *cust;
	int i=0,size;
	Customer temp;

	if((cust=fopen("Customer.dat","rb"))==NULL)
	{
		puts("\nFATAL ERROR, PLEASE CONTACT YOUR SYSTEM ADMINISTRATOR");
		getch();
		return -99;
	}
	else
	{
		fseek(cust,0,SEEK_SET);
		fread(&size,sizeof(int),1,cust);

		for(i=0;i<size;i++)
		{
			fseek(cust,sizeof(int)+ i*sizeof(Customer),SEEK_SET);
			fread(&temp,sizeof(Customer),1,cust);
			if(strcmp(key.streetAddress,temp.serviceAddress.streetAddress)==0 && strcmp(key.adminDiv,temp.serviceAddress.adminDiv)==0 &&strcmp(key.adminDiv,temp.serviceAddress.city)==0)
			{
				fclose(cust);
				return i;
			}
		}
		fclose(cust);
		return -1;
	}
}

Customer createCustomerAccount()
{
	struct tm today;
	boolean loop=False;
	Customer c;
	int num;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	num = 10000 + rand() % 90000;
	sprintf(c.IDNo, "%i", num);

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40);  printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("ID: %s", c.IDNo); blankSpaces(28); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("First Name: "); blankSpaces(25); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Last Name: "); blankSpaces(26); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Telephone Number: "); blankSpaces(19); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("(7 digits. No dashes. Only numbers.)"); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Address           "); blankSpaces(19); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tStreet Address: "); blankSpaces(12); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tCity: "); blankSpaces(22); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tParish: "); blankSpaces(20); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tCountry:        "); blankSpaces(12); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Date Of Birth     "); blankSpaces(19); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(0); printf("----------------------------------------"); blankSpaces(0); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tYear: "); blankSpaces(22); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tMonth: "); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("\t\tDay:        "); blankSpaces(16); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1, 1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              CUSTOMER DATA ENTRY              "); blankSpaces(1); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(35, 10);
	fflush(stdin);
	gets(c.fName);
	fflush(stdin);
	makeUpper(c.fName);

	gotoxy(34, 13);
	fflush(stdin);
	gets(c.lName);
	fflush(stdin);
	makeUpper(c.lName);

	loop=False;
	do
	{
		if(loop)
		{
			gotoxy(1, 1);
			
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              INVALID TELEPHONE NUMBER!              "); blankSpaces(1); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

			SetConsoleTextAttribute(h, 113);
		}
		loop=True;
		gotoxy(41, 16);
		
		fflush(stdin);gets(c.tel);
	}while(strlen(c.tel)!=7 || !isNumber(c.tel));

	gotoxy(1, 1);

	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              CUSTOMER DATA ENTRY              "); blankSpaces(1); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	loop=False;
	do
	{
		if(loop)
		{
			gotoxy(1, 1);

			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("There is already an customer at that address. You cannot use that address"); blankSpaces(0); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

			SetConsoleTextAttribute(h, 113);
		}
		loop=True;
		gotoxy(32, 25);
		fflush(stdin);
		gets(c.serviceAddress.streetAddress);
		fflush(stdin);
	
		gotoxy(38, 28);
		fflush(stdin);
		gets(c.serviceAddress.city);
		fflush(stdin);
	
		gotoxy(40, 31);
		fflush(stdin);
		gets(c.serviceAddress.adminDiv);
		fflush(stdin);
	
		gotoxy(41, 34);
		fflush(stdin);
		gets(c.serviceAddress.country);
		fflush(stdin);
	}while(searchAddress(c.serviceAddress)!=-1);
	
	gotoxy(1, 1);

	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              CUSTOMER DATA ENTRY              "); blankSpaces(1); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	loop=False;
	do
	{
		if(loop)
		{
				gotoxy(1, 1);

				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              Must enter a valid date              "); blankSpaces(1); printf("\n");
				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

				SetConsoleTextAttribute(h, 113);
		}
		loop=True;
		gotoxy(38, 41);
		fflush(stdin);
		scanf("%i", &c.dob.y);
		fflush(stdin);

		gotoxy(39, 44);
		fflush(stdin);
		scanf("%i", &c.dob.m);
		fflush(stdin);
		
		gotoxy(37, 47);
		fflush(stdin);
		scanf("%i", &c.dob.d);
		fflush(stdin);
	}while(valDate(c.dob.d,c.dob.m,c.dob.y)!=1);

	//puts("Would you like to input information for a credit card? Y/N");
	//fflush(stdin);
	//if(toupper(getchar())=='Y')
	//{	
	//	c.cardInfo=createCard();
	//}
	//else
	//{
	//	c.cardInfo=noCard;
	//}
	c.cardInfo=noCard;

	c.balance= 0 - retrieveRates().setup;
	
	c.lastReading=0;
	c.connected=True;
	c.leastAmount=c.balance*0.1;
	today= *curTime();
	
	c.lastDate=today;
	c.payBy.tm_year=-1;// *futureDate(today.tm_mday,today.tm_mon+1,today.tm_year+1900,30);
	//printf("\nCustomer must pay for bill by %i %i %i",c.payBy.tm_mday,c.payBy.tm_mon+1,c.payBy.tm_year+1900);

	_getch();
	return c;
}

void custBill(Customer customer)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	char status[15];
	char fullName[100];
	char address[70];
	char addressHeadings[80];

	float nearest;
	float othNearest;

	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 80");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;


	SetConsoleTextAttribute(h, 116); blankSpaces(36); printf("BILL"); blankSpaces(36); printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(36); printf("----"); blankSpaces(36); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(76); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(10); printf("|"); blankSpaces(75 - 10); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
		
	strcpy(fullName, customer.fName);
	strcat(fullName, " ");
	strcat(fullName, customer.lName);

	strcpy(address, customer.serviceAddress.streetAddress);
	strcat(address, ",");
	strcat(address, " ");
	strcat(address, customer.serviceAddress.city);
		

	strcpy(addressHeadings, "|Address");
	strncat(addressHeadings, customer.serviceAddress.streetAddress,strlen( customer.serviceAddress.streetAddress));
	strcat(addressHeadings, " ");
	strcat(addressHeadings, "|City");
	strncat(addressHeadings, customer.serviceAddress.city, strlen(customer.serviceAddress.city));
	strcat(addressHeadings,"|Sector ID|");
		
	nearest = ceilf(customer.b.service);
	othNearest = ceilf(customer.b.debts);
	

		
	SetConsoleTextAttribute(h, 116); printf("Name      | "); SetConsoleTextAttribute(h, 112); printf("%s",fullName); blankSpaces(64 - strlen(fullName)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(9); printf(" |"); blankSpaces(75 - 10); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(9); printf(" |"); blankSpaces(75 - 10); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); printf("Address   |"); SetConsoleTextAttribute(h, 112); printf("%s",address); blankSpaces(65 - strlen(address)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(9); printf(" |"); blankSpaces(75 - 10); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); printf("Usage     |");  SetConsoleTextAttribute(h, 112); printf("%lu", customer.b.usage); blankSpaces(65 - getIntLen(customer.b.usage)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); printf("Service   |"); SetConsoleTextAttribute(h, 112); printf("%.2f", nearest); blankSpaces(62 - getFloatLength(nearest)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); printf("Debts     |"); SetConsoleTextAttribute(h, 112);  printf("%.2f", othNearest); blankSpaces(62 - getFloatLength(othNearest)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(9); printf(" |"); blankSpaces(75 - 10); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); printf("Debts     |"); SetConsoleTextAttribute(h, 112); printf("%02i\\%02i\\%i",customer.payBy.tm_mon, customer.payBy.tm_mday, customer.payBy.tm_year); blankSpaces(55); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 112); printf("mm\\dd\\yyyy"); SetConsoleTextAttribute(h, 116); printf("|"); blankSpaces(75 - 10); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");

	SetConsoleTextAttribute(h, 116); blankSpaces(76); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");

	SetConsoleTextAttribute(h, typConsoleApp); printf("  "); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(76);
	
}

void showBill(char custID[])
{
	Customer c;

	c=retrieveCustomer(searchCustomer(custID));
	custBill(c);

	_getch();
}

int payBill(char custID[])//1 paid, 0 not paid
{
	boolean loop=False;
	struct tm today;
	Customer cust;
	char authCode[4];
	int tries=4,pos;

	cust=retrieveCustomer(pos=searchCustomer(custID));
	
	if(cust.balance>=0)
	{
		puts("No outstanding payments due.");
		return 1;
	}

	if(strcmp(cust.cardInfo.ccNo,"0000 0000 0000 0000")==0)
	{
		puts("\nYou do not have a credit card to pay for this bill");
		puts("\nYou must go to a customer service outlet to add a credit card to your file");
		Sleep(1500);
		//puts("\nWould you like to add a card? Y/N");
		//if(toupper(getchar())=='Y')
		//{
		//	if(addCard(custID,q)==0)
		//	{
		//		/*cust.balance=0;
		//		cust.leastAmount=0;
		//		cust.payBy.tm_year=-1;

		//		rewriteCustomer(cust,pos);
		//		return 1;*/
		//	}
		//	else
		//	{
		//		return 0;
		//	}
		//}
		//else
		//{
		//	return 0;
		//}
		return 0;
	}
	else
	{
		loop=False;
		do
		{
			if(tries<=0)
			{
				break;
			}
			if(loop)
			{
				printf("\nIncorrect data, you have %i tries remaining\n",tries);
			}
			
			puts("\nEnter authentication code");
			
			fflush(stdin);gets(authCode);
			tries--;
		}while(strcmp(authCode,cust.cardInfo.authCode)!=0);
			

		if(tries <=0)
		{
			puts("Too many failures.\nExiting menu");
			Sleep(1500);
			return 0;
		}
		else
		{		
			today = *(curTime());
			if(compareDate(convertDateToStruct(cust.cardInfo.expiry),today)<0)
			{
				puts("Expired card");
				Sleep(1000);
				return 0;
			}
			else
			{			
				cust.balance=0;
				cust.leastAmount=0;
				cust.payBy.tm_year=-1;

				rewriteCustomer(cust,pos);

				return 1;
			}
		}
	}
}

void viewBill(char custID[])
{
	char ans[6];

	//do{
	system("cls");
		
	showBill(custID);

	puts("\nWould you like to pay for this bill Y/N");
	fflush(stdin);gets(ans);

	makeUpper(ans);

	//if(strcmp(ans,"CALL")==0)
	//{
	//	acceptCall(q);
	//	continue;
	//} 
	if(ans[0]=='Y')
	{
		if(payBill(custID)==1)
		{
			puts("\nBill paid successfully in full");
		}
		else
		{
			puts("\nBill not paid. Balance remains as is");
		}
	//	break;
	}
	else
	{
		puts("\nYou will now be taken back to the main menu");
	//	break;
	}
	//}while(1);

	Sleep(1500);
}

int popCustomers(Customer customer[])
{
	FILE *fp;
	int i,size;
	if((fp=fopen("Customer.dat","rb"))==NULL)
	{
		puts("\nERROR READING FILE, CONTACT SYSTEM ADMINISTRATOR");
		fclose(fp);
		return -1;
	}
	else
	{
		fseek(fp,0,SEEK_SET);
		fread(&size,sizeof(int),1,fp);
		for(i=0;i<size;i++)
		{
			fseek(fp,sizeof(int) + i*(sizeof(Customer)),SEEK_SET);
			fread(&customer[i],sizeof(Customer),1,fp);
		}
		return size;
	}
}

void bubbleSort(Customer customers[], int size)
{
	int i, pass, swap;

	Customer temp;

	//loop to control number of passes
	for(pass = 1; pass < size; pass++)
	{
		swap = 0;
		//loop to control number of comparisons per pass
		for(i = 0; i < size - pass; i++)
		{
			//compare adjacent elements and swap them if first element is greater than second element
			if(strcmp(customers[i].IDNo, customers[i + 1].IDNo)>0)
			{
				temp = customers[i];
				customers[i] = customers[i + 1];
				customers[i + 1] = temp;
				swap = 1;
			}
		}

		if(!swap) //if no swaps made on a pass, then data is sorted
		{
			return;
		}
	}
}

void writeAllCustomers(Customer cust[],int size)
{
	FILE *fp;
	int i;

	if((fp=fopen("Customer.dat","wb"))==NULL)
	{
	}
	else
	{
		fwrite(&size,sizeof(int),1,fp);
		for(i=0;i<size;i++)
		{
			fseek(fp,sizeof(int) + i*(sizeof(Customer)),SEEK_SET);
			fwrite(&cust[i],sizeof(Customer),1,fp);
		}
		fclose(fp);
	}
}

void addCustomer(Customer cust)
{
	Customer customers[100];
	int size;

	if(cust.IDNo[0]==0)
	{
		return;
	}
	else
	{
		size=popCustomers(customers);
		customers[size]=cust;
		size++;
		bubbleSort(customers,size);
		writeAllCustomers(customers,size);
	}
}

int binarySearch(Customer arr[], char key[],int size)
{
	int low=0, high=size-1, mid; //variable to hold middle element of array

	//loop until low subscript is greater than high subscript
	while(low <= high)
	{
		//determine middle element of subarray being searched
		mid = (low + high)/2;

		//if searchKey matched middle element, return middle
		if(strcmp(key,arr[mid].IDNo)==0)
		{
			return mid;
		}
		//if searchKey less than middle element, set new high
		else
		{
			if(strcmp(key, arr[mid].IDNo)<0)
			{
				high = mid - 1; //search low end of array
			}
			//if searchKey greater than middle element, set new low
			else
			{
				low = mid + 1; //search high end of array
			}
		}
	}
	
	return -1; //key not found
}

int searchCustomer(char key[])
{
	Customer customers[100];
	int size;
	size=popCustomers(customers);

	return binarySearch(customers,key,size);
}

Customer retrieveCustomer(int pos)
{
	FILE *cust;
	Customer customer=emptyCustomer;

	if((cust=fopen("Customer.dat","rb"))==NULL)
	{
		puts("\nERROR READING FILE, CONTACT SYSTEM ADMINISTRATOR");
		fclose(cust);
	}
	else
	{
		if(pos>=0)
		{
			fseek(cust,sizeof(int) + pos * sizeof(Customer),SEEK_SET);
			fread(&customer,sizeof(Customer),1,cust);
		}
		fclose(cust);
	}
	return customer;
}

int logCall(Call c)
{
	FILE *call;

	if((call=fopen("Call log.dat","ab"))==NULL)
	{
		puts("\nWRITING TO FILE FAILURE, PLEASE TRY AGAIN");
		system("pause");
		return -1;
	}
	else
	{
		c.end=*(curTime());
		fwrite(&c,sizeof(Call),1,call);
		fclose(call);
		return 0;
	}
}

Call answerCall()
{
	Customer cust;
	Call c;
	int num;

	num =100000 + rand() %900000;
	sprintf(c.callID,"%i",num);

	strcpy(c.agentID,"-999");//-999 tells if an agent answered is on the call
	
	c.start=* (curTime());
	c.complete=False;

	puts("\nFirst Name:");
	
	fflush(stdin);gets(c.fName);
	
	puts("\nLast Name:");
	
	fflush(stdin);gets(c.lName);

	puts("\nCustomer ID:");

	fflush(stdin);gets(c.custID);
	
	cust=retrieveCustomer(searchCustomer(c.custID));
	if(/*0>searchCustomer(c.custID) && */strcmp(cust.IDNo,"-9999")!=0 && cust.connected)
	{
		puts("\nPlease wait, your call will be connected as soon as possible");
		Sleep(1500);
		return c;
	}
	else
	{
		strcpy(c.custID,"-9999");
		puts("\nCustomer details not found.\nEnding call. Goodbye!");
		c.complete=False;
		logCall(c);
		Sleep(1500);
		return emptyCall;
	}
}

void acceptCall(Queue *q)
{
	Call call;

	system("cls");
	call=answerCall();
	if(strcmp(call.agentID,"00")!=0)//"00" is the ID for emptycall
	{
		enqueue(q,call);
	}
}

void deleteCustomer(char ID[])
{
	int pos;
	Customer cust;

	puts("\nAre you sure you want to discontinue your account? Y/N");
	if('Y'==toupper(getchar()))
	{
		cust=retrieveCustomer(pos=searchCustomer(ID));

		if(cust.balance<0)
		{
			puts("\nYou must pay your outstanding balance to be disconnected");
			puts("\nPay Bill? Y/N");
			if('Y'==toupper(getchar()))
			{
				if(payBill(ID)==1)
				{
					puts("\nBill successfully paid in full");
				}
				else
				{
					puts("\nBill not paid, you are still a customer");
					puts("\nYou will now be returned to the main menu");
					Sleep(2000);
					return;
				}
			}
			else
			{
				puts("\nYou will be returned to the main menu");
				Sleep(2000);
				return;
			}
		}
		cust.balance-=retrieveRates().setup;
		cust.connected=False;
		cust.payBy.tm_year=-2;
		rewriteCustomer(cust,pos);
	}
	puts("\nYou will be returned to the main menu");
	Sleep(2000);
	return;
}

int addCard(char ID[])
{
	CC card;
	Customer cust;
	int pos;
	puts("\nYou will overwrite existing credit card data.\nDo you still want to proceed? Y/N");
		
	fflush(stdin);
	
	if(toupper(getchar())=='Y')
	{
		card=createCard();
		cust=retrieveCustomer(pos=searchCustomer(ID));
		
		cust.cardInfo=card;
		rewriteCustomer(cust,pos);
		return 0;		
	}
	else
	{
		return 1;
	}
}

void outtageTable(Outage outs[], int arrSize)
{
	int i;
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 80");
	
	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes; 

	SetConsoleTextAttribute(h, typConsoleApp);

	SetConsoleTextAttribute(h, 116); blankSpaces(35); printf("OUTAGE"); blankSpaces(35); printf("\n");
	SetConsoleTextAttribute(h, 116); blankSpaces(35); printf("------"); blankSpaces(35); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");

	for(i = 0; i < arrSize; i++)
	{
		SetConsoleTextAttribute(h, 116); makeDashes(38); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); printf("Region    |"); printf("%s",outs[i].region); blankSpaces(65 - strlen(outs[i].region)); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n"); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2);  printf("\n");
		SetConsoleTextAttribute(h, 116); printf("Date      |"); printf("%02i\\%02i\\%i to %02i\\%02i\\%i", outs[i].start.tm_mday, outs[i].start.tm_mon, outs[i].start.tm_year, outs[i].end.tm_mday, outs[i].end.tm_mon,outs[i].end.tm_year); blankSpaces(65 - 24); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
		SetConsoleTextAttribute(h, 116); printf("Time      |"); printf("%02i:%02i to %02i:%02i", outs[i].start.tm_hour, outs[i].start.tm_min, outs[i].end.tm_hour, outs[i].end.tm_min); blankSpaces(65 - 14); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
		SetConsoleTextAttribute(h, 116); blankSpaces(35); printf("------"); blankSpaces(35); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(2); printf("\n");
	}


}

void viewOutages()//RETURN
{
	FILE * out;
	int i,num;
	Outage o[50];
	boolean empty=True;

	if((out=fopen("Outage.dat","rb"))==NULL)
	{

	}
	else
	{
		fseek(out,0,SEEK_SET);
		fread(&num,sizeof(int),1,out);
		
		if(!num)
		{
			puts("\nNo scheduled outages for your region");
		}
		else
		{
			for(i=0;i<num;i++)
			{
				fseek(out,sizeof(int) + i * sizeof(Outage),SEEK_SET);
				fread(&o[i],sizeof(Outage),1,out);
			}
			puts("\nThese outages are for your region");
			
			outtageTable(o,num);
			_getch();
		}
		fclose(out);
	}
}

void addCallToFile(Call c)
{
	FILE *call;
	int size;

	if((call=fopen("Call.dat","rb+"))==NULL)
	{

	}
	else
	{
		fseek(call,0,SEEK_SET);
		fread(&size,sizeof(int),1,call);

		fseek(call,sizeof(int) + sizeof(Call) * size,SEEK_SET);
		fwrite(&c,sizeof(Call),1,call);
		
		fseek(call,0,SEEK_SET);
		size++;
		fwrite(&size,sizeof(int),1,call);
		fclose(call);
	}
}

Call popCall()//Essentially a queue function that takes the first call off the queue
{
	Call temp,pop=emptyCall;
	FILE *call;
	int size,i;

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

int readCallsFile(Queue *q)//Calls on queue that have not been answered must be added onto the queue so that their call can be deleted
{
	Call call;
	boolean empty=True;

	call=popCall();
	while(strcmp(call.callID,"")!=0)//"" is the callID of an empty call
	{
		empty=False;
		enqueue(q,call);//Probably should make enqueue do some checking
		call=popCall();
	}
	
	return empty;
}

void TerminateCalls(Queue *q)
{
	Call c;

	while(!isEmpty(*q))
	{
		system("cls");
		puts("\nSorry. We cannot take your call now. Please call again later.");
		c=dequeue(q);
		c.complete=False;
		logCall(c);
	}
	puts("All calls have been successfully terminated");
	Sleep(1000);
}

void createCallFile()
{
	FILE *fp;
	int size;

	if((fp=fopen("Call.dat","wb"))==NULL)
	{

	}
	else
	{
		fseek(fp,0,SEEK_SET);
		size=0;
		fwrite(&size,sizeof(int),1,fp);
		fclose(fp);
	}
}


int MainMenu()//Call Menu
{
	int choice,onCall,write;
	char decision[10];
	Queue q=createQueue();
	Call call;

	createCallFile();
	
	do
	{
		system("cls");
		menu1();
		
		fflush(stdin);
		gets(decision);
		fflush(stdin);

		if(strcmp(decision,"CALL")==0)//If 'CALL' is entered at a data entry point in the program, this function will be called
		{
			acceptCall(&q);
		}
		else if(strcmp(decision,"1")==0)//by being at this point, the queue cannot contain any calls but there may be calls on file
		{
			readCallsFile(&q);
			if(!isEmpty(q))
			{
				TerminateCalls(&q);	
			}
			return 2;
		}
		else if(strcmp(decision,"9")==0)
		{
			readCallsFile(&q);
			if(!isEmpty(q))
			{
				TerminateCalls(&q);	
			}
			return 1;
		}
		

		while(!isEmpty(q))
		{

			do
			{
				system("cls");
				menu2();
		
				fflush(stdin);
				gets(decision);
				fflush(stdin);
				system("cls");
		
				if(strcmp(decision,"CALL")==0)
				{
					acceptCall(&q);
				}
				else if(strcmp(decision,"1")==0)
				{
					readCallsFile(&q);
					if(!isEmpty(q))
					{
						TerminateCalls(&q);	
					}
					return 2;
				}
				else if(strcmp(decision,"9")==0)
				{
					readCallsFile(&q);
					if(!isEmpty(q))
					{
						TerminateCalls(&q);	
					}
					return 1;
				}
				else if(strcmp(decision,"0")==0)
				{
					puts("\nYou are connected to the TBEC Call Centre");
					call=dequeue(&q);
				
					call.complete=True;//Call is completed unless otherwise noted
					Sleep(1000);
					break;
				}			
			}while(1);

			do
			{
				write=1;
				system("cls");
				puts("\nSelect an option");
				onCall=1;
				puts("\n1\tReport an emergency");
				puts("\n2\tView Bill");
				puts("\n3\tView Outages");/*
				puts("\n4\tAdd Card");*/
				puts("\n5\tDelete Account");
				puts("\n6\tHang up");
				puts("\n7\tDisconnected call");//Customer hung up
				//maybe have a function to schedule an appointment

				fflush(stdin);scanf("%i",&choice);

				switch(choice)
				{
					case 1:
						addCallToFile(call);
						write=0;
						onCall=0;
						break;
					case 2:
						viewBill(call.custID);
						break;
					case 3:
						viewOutages();
						break;
					//case 4:
					//	addCard(call.custID,&q);
					//	break;
					case 5:
						deleteCustomer(call.custID);
						break;
					case 6:
						onCall=0;
						break;
					case 7:
						call.complete=False;//Call incomplete
						onCall=0;
						break;
					default:
						puts("\nInvalid input, please try again");
						_getch();
						break;
				}
			}while(onCall==1);
			
			
			if(write==1)
			{
				puts("Thank you for calling");
				logCall(call);
			}
			else
			{
				puts("You will be routed to the next available customer service representative");
			}
			Sleep(1500);
		}
	}while(1);
}

void updateActive(int state)
{
	FILE *fp;
	char temp[5]="0000";
	int i;

	if((fp=fopen("CallLines.dat","wb"))==NULL)
	{
	}
	else
	{
		fwrite(&state,sizeof(int),1,fp);
		state=0;
		for(i=0;i<6;i++)
		{
			fseek(fp,sizeof(int)+ i*(sizeof(int)+sizeof(char)*5),SEEK_SET);
			fwrite(&state,sizeof(int),1,fp);
			fwrite(&temp,sizeof(char),5,fp);
		}
		fclose(fp);
	}
}

void createAccountFile()
{
	FILE *fp;
	
	int ID, size, j;
	
	Account a;
	
	char pass[21];
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	if((fp = fopen("System.dat", "wb")) != NULL)
	{
		a.clearance = 1;

		ID = 1000 + rand() %9000;
		sprintf(a.ID, "%i", ID);
		
		system("color 85");

		GetConsoleScreenBufferInfo(h, &typScrApp);
		typConsoleApp = typScrApp.wAttributes;

		blankLines(5);
	
		blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("This is an administrator account."); blankSpaces(8); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
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
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

		SetConsoleTextAttribute(h, 113);
	
		gotoxy(1,1);
			
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("              ACCOUNT CREATION         "); blankSpaces(9); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);
	
		gotoxy(40, 13);

		fflush(stdin);
		gets(a.name);
		fflush(stdin);

		do
		{
			gotoxy(40, 16);
			getPassword(a.pass);

			gotoxy(42, 19);
			getPassword(pass);
			
			if(strcmp(a.pass, pass) != 0)
			{
				gotoxy(42, 19);
				for(j = strlen(pass); j > 0; j--)
				{
					printf(" ");
				}

				gotoxy(40, 16);
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

			gotoxy(40, 16);
		}while(strcmp(a.pass, pass) != 0); //password validation

		size = 1;
		fwrite(&size, sizeof(int), 1, fp);
		fwrite(&a, sizeof(Account), 1, fp);
		fclose(fp);
	}
}

void createSectorFile()
{
	FILE *fp;
	int size;

	if((fp=fopen("Sector.dat","wb"))==NULL)
	{
	}
	else
	{
		size=0;
		fwrite(&size,sizeof(int),1,fp);
		fclose(fp);
	}

}

void createOutageFile()
{
	FILE *fp;
	int size;

	if((fp=fopen("Outage.dat","wb"))==NULL)
	{
	}
	else
	{
		size=0;
		fwrite(&size,sizeof(int),1,fp);
		fclose(fp);
	}
}

void createCustomerFile()
{
	FILE *fp;
	int size;

	if((fp=fopen("Customer.dat","wb"))==NULL)
	{
	}
	else
	{
		size=0;
		fwrite(&size,sizeof(int),1,fp);
		fclose(fp);
	}
}

systemFile retrieveRates()
{
	FILE *fp;
	systemFile s;
	if((fp=fopen("Rates.dat","rb"))==NULL)
	{
	}
	else
	{
		fread(&s,sizeof(systemFile),1,fp);
		return s;
	}
}
void createRates()
{
	boolean loop;
	
	int i, temp;
	
	systemFile sys;
	
	FILE *fp;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("cls & color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Connection Fee: "); blankSpaces(25); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

	SetConsoleTextAttribute(h, 113);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                   TBEC RATES              "); blankSpaces(5); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(39, 7);
	fflush(stdin);
	scanf("%f", &sys.setup);
	fflush(stdin);

	for(i = 0; i < 5; i++)
	{
		if(i == 0)
		{
			sys.bracket[i].minimum = 0;
		}
		else
		{
			sys.bracket[i].minimum = sys.bracket[i - 1].maximum;
		}

		if(i == 4)
		{
			sys.bracket[i].maximum = -1;
			break;
		}

		system("cls & color 85");

		GetConsoleScreenBufferInfo(h, &typScrApp);
		typConsoleApp = typScrApp.wAttributes;

		blankLines(5);
	
		blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44);  printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Cost per kWh for bracket %i: ", i + 1); blankSpaces(13); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                                    "); blankSpaces(5); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		gotoxy(0, 10);
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Energy minimum for bracket %i is %i.", i + 1, sys.bracket[i].minimum); blankSpaces(0); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Energy limit of bracket %i in kWh:", i + 1); blankSpaces(8); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("(Enter -1 if highest bracket)"); blankSpaces(12); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(44); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(44);

		SetConsoleTextAttribute(h, 113);

		SetConsoleTextAttribute(h, 113);

		gotoxy(1, 1);
			
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                   TBEC RATES              "); blankSpaces(5); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);
		
		gotoxy(51, 7);
		fflush(stdin);
		scanf("%f", &sys.bracket[i].rate);
		fflush(stdin);

		loop = False;
		do
		{
			if(loop)
			{
				gotoxy(1, 1);
			
				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("Energy maximum must be greater than its minimum!"); blankSpaces(0); printf("\n");
				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
				SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

				SetConsoleTextAttribute(h, 113);
			}

			gotoxy(57, 13);
			fflush(stdin);
			scanf("%i", &temp);
			fflush(stdin);

			if(temp == -1)
			{
				sys.bracket[i].maximum = -1;
			}
			else
			{
				if(sys.bracket[i].minimum < temp)
				{
					sys.bracket[i].maximum = temp;
					loop = False;
				}
				else
				{
					loop = True; //max must be greater than minimum
				}
			}
		}while(loop);

		gotoxy(1, 1);
			
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                   TBEC RATES              "); blankSpaces(5); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

		SetConsoleTextAttribute(h, 113);

		if(sys.bracket[i].maximum == -1)
		{
			break;
		}
	}

	if((fp = fopen("Rates.dat", "wb")) != NULL)
	{
		fwrite(&sys, sizeof(systemFile), 1, fp);
		fclose(fp);
	}
}

void createFiles()
{
	createAccountFile();
	
	createRates();
	
	createOutageFile();
	
	createCustomerFile();

	system("cls");

	setupSuccess();
	
	Sleep(3000);
}

void manageBills()//FUNCTION PURPOSELESS AS CUSTOMER WILL BE DISCONNECTED FROM GRID IF THEY HAVEN'T PAID UP TO NEXT BILLING DATE
{
	
}

void outdatedOutages()
{
	struct tm today;
	FILE *fp;
	int i=0,size,count=0;
	Outage temp,o[50];

	if((fp=fopen("Outage.dat","rb"))==NULL)
	{

	}
	else
	{
		today= *(curTime());
		fseek(fp,0,SEEK_SET);
		fread(&size,sizeof(int),1,fp);

		for(i=0;i<size;i++)
		{
			fseek(fp,sizeof(int) + i* sizeof(Outage),SEEK_SET);
			fread(&temp,sizeof(Outage),1,fp);
			if(compareDate(temp.end,today)>0)
			{
				o[count]=temp;
				count++;
			}
		}
		fclose(fp);
	}

	if((fp=fopen("Outage.dat","wb"))==NULL)
	{
	}
	else
	{
		fseek(fp,0,SEEK_SET);
		fwrite(&count,sizeof(int),1,fp);
		for(i=0;i<count;i++)
		{
			fseek(fp, sizeof(int) + i * sizeof(Outage),SEEK_SET);
			fwrite(&o[i],sizeof(Outage),1,fp);
		}
		fclose(fp);
	}
}

int firstTime()
{
	FILE *fp, *rate, *out, *cust;

	if((fp = fopen("System.dat", "rb")) == NULL) //if system file is empty then nothing can be done
	{
		firstTimeDialogBox();
		if('N'== toupper(getchar()))
		{
			system("cls");
			firstTimeFail();
			_getch();
			return -99;
		}
		
		system("cls");
		createFiles();
		return 1;
	}
	else if((rate = fopen("Rates.dat", "rb")) == NULL)
	{
		firstTimeDialogBox();
		if('N'== toupper(getchar()))
		{
			system("cls");
			firstTimeFail();
			_getch();
			return -99;
		}
		
		system("cls");
		createFiles();
		return 1;
	}
	else if((out = fopen("Outage.dat", "rb")) == NULL)
	{
		firstTimeDialogBox();
		if('N' == toupper(getchar()))
		{
			system("cls");
			firstTimeFail();
			_getch();
			return -99;
		}
		system("cls");
		createFiles();
		return 1;
	}
	else if((cust=fopen("Customer.dat", "rb")) == NULL)
	{
		firstTimeDialogBox();
		if('N'== toupper(getchar()))
		{
			system("cls");
			firstTimeFail();
			_getch();
			return -99;
		}
		system("cls");
		createFiles();
		return 1;
	}


	//for(i=0;i<3;i++)
	//{
	//	if((fp=fopen(filenames[i],"rb"))==NULL)
	//	{
	//		puts("\nContact system admin. There is a severe error to the system");
	//		_getch();
	//		return -99;
	//	}
	//}
	//return 0;
}

int systemActivities()
{
	if(firstTime()==-99)
	{
		return -1;
	}
	manageBills();//UPDATE BILLS FOR PEOPLE WHO HAVE NOT PAID
	outdatedOutages();//update outages so that outages that have passed are no longer on file
	return 0;
}