/***************************************************************************************************************
Date: November 26, 2013

Group members: Romario Maxwell, Romain Jones, Nicanor Gordon, Ian Smith

Company: We Can Cross It
***************************************************************************************************************/


int getIntLen (unsigned value){
  int l=1;
  while(value>9){ l++; value/=10; }
  return l;
}

int getFloatLength(float value){
	 int l=1;
  while(value>9){ l++; value/=10; }
  return l;
}


 int digitCount(int num)
 {
	 int count = 0;
	 for(;num != 0; num = num/ 10)
	 {
		 count++;
	 }

	 return count;
 }

 int floatCount( float num)
 {
	 int n;
	 char buffer[30];

	 n = sprintf(buffer, "%.02f", num);

	 return n;
 }

 float makeNegative( float num)
 {
	 num = num * -1;
	 return num;
 }

void printDash(int amt)
{
	int i;
	
	for( i = 0; i < amt; i++)
	{
		printf("\n_");
	}
}

void colorTest()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	int i;

	for(i = 0; i<244; i++)
	{
		SetConsoleTextAttribute(h, i); printf("\n%i\n", i);
	}

}

void gotoxy(int x, int y)
{
	COORD pos;
	HANDLE H;
	H = GetStdHandle(STD_OUTPUT_HANDLE);

	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(H, pos);
}

void blankLines(int amt)
{
	int i;

	for(i = 0; i < amt; i++)
	{
		printf("\n");
	}
}

void blankSpaces(int amt)
{
	int i;
	for( i = 0; i < amt; i++)
	{
		printf(" ");
	}
}

void makeDashes(int amt)
{
	int i;
	for( i = 0; i < amt; i++)
	{
		printf("- ");
	}
}

void makeBColour(WORD colour)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, colour); 
}

void adminMenu(WORD scheme)
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(h, scheme);
	blankLines(2);
	blankSpaces(10); 
	
	SetConsoleTextAttribute(h,112); printf("\n                                                  "); makeBColour(BACKGROUND_RED); printf("\n");
	SetConsoleTextAttribute(h, scheme);
	
	blankSpaces(10);
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 1. ");
	SetConsoleTextAttribute(h,116); printf("\nUsers ");
	SetConsoleTextAttribute(h,116); printf("\n                   "); blankSpaces(11);	makeBColour(BACKGROUND_RED);	printf("\n ");	
	SetConsoleTextAttribute(h, scheme);
	printf("\n "); blankLines(1);
	blankSpaces(10); 
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 2. ");
	SetConsoleTextAttribute(h,116); printf("\nAdd Customer        ");
	SetConsoleTextAttribute(h,116); blankSpaces(16);
	SetConsoleTextAttribute(h, scheme);
	makeBColour(BACKGROUND_RED);	printf("\n "); blankLines(1); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10); 
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 3. ");
	SetConsoleTextAttribute(h,116); printf("\nDelete ");
	SetConsoleTextAttribute(h,116); printf("\nCustomer ");
	SetConsoleTextAttribute(h,112); blankSpaces(20);
	SetConsoleTextAttribute(h, scheme);
	makeBColour(BACKGROUND_RED);	printf("\n "); blankLines(1); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10);
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 4. ");
	SetConsoleTextAttribute(h,116); printf("\nAdd Outage    ");
	SetConsoleTextAttribute(h,116); blankSpaces(22);
	SetConsoleTextAttribute(h, scheme);
	makeBColour(BACKGROUND_RED);	printf("\n "); blankLines(1); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10); 
	SetConsoleTextAttribute(h,112); blankSpaces(10); printf("\n 0. ");
	SetConsoleTextAttribute(h,112); printf("\nExit");
	SetConsoleTextAttribute(h,112); blankSpaces(32);
	makeBColour(BACKGROUND_RED);	printf("\n "); printf("\n"); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10);
	SetConsoleTextAttribute(h,112); printf("\n                                                  "); makeBColour(BACKGROUND_RED);	printf("\n "); printf("\n");
	SetConsoleTextAttribute(h, scheme);
	blankSpaces(11);
	makeBColour(BACKGROUND_RED);	printf("\n                                                  ");
}

int adminBg()
{
	int choice;
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");
	
	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	system("cls");

	blankLines(1);
	SetConsoleTextAttribute(h, 112);	printf("\n _______ _____   _____  _____  " );	makeBColour(BACKGROUND_RED); SetConsoleTextAttribute(h, typConsoleApp); 	blankSpaces(11); SetConsoleTextAttribute(h, 112); printf("\n                               "); 						printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n|__ _ __|   _  \\|  ___ / ____| "); makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n   Line 1 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n   Line 4 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n "); 	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   | |  |  |_|  | |___| |      " ); makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n                               "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");		printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   | |  |   _  /|  ___| |      " ); makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n   Line 2 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n   Line 5 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   | |  |  |_| \\| |___| |____  ");	makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n                               "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   |_|  |______/|_____ \\_____| ");	makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n   Line 3 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n   Line 6 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n                               ");	makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n                               "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");		printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(1); makeBColour(BACKGROUND_RED); printf("\n                               ");	SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(1);	SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n                               ");		

	SetConsoleTextAttribute(h, typConsoleApp);

	adminMenu(typConsoleApp);

	blankLines(3);

	SetConsoleTextAttribute(h, 112); printf("\n                                             "); printf("\n");
	SetConsoleTextAttribute(h, 112); printf("\n   "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n - OPEN"); SetConsoleTextAttribute(h, 112); printf("\n   "); SetConsoleTextAttribute(h, BACKGROUND_BLUE | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n - ON CALL"); SetConsoleTextAttribute(h, 112); printf("\n   "); SetConsoleTextAttribute(h, BACKGROUND_RED| BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n - OFFLINE");  SetConsoleTextAttribute(h, 112); printf("\n   ");  SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");   printf("\n");
	SetConsoleTextAttribute(h, 112); printf("\n                                             "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n "); printf("\n");
	SetConsoleTextAttribute(h,typConsoleApp); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n                                             ");

	SetConsoleTextAttribute(h, 132);
	gotoxy(47, 23);

	
	fflush(stdin);scanf("%i", &choice);
	

	return choice;
}

void standardMenu(WORD scheme)
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(h, scheme);
	blankLines(2);
	blankSpaces(10); 
	
	SetConsoleTextAttribute(h,112); printf("\n                                                  "); makeBColour(BACKGROUND_RED); printf("\n");
	SetConsoleTextAttribute(h, scheme);
	
	blankSpaces(10);
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 1. ");
	SetConsoleTextAttribute(h,116); printf("\nList ");
	SetConsoleTextAttribute(h,116); printf("\nof ");
	SetConsoleTextAttribute(h,116); printf("\nScheduled ");
	SetConsoleTextAttribute(h,116); printf("\nOutages"); blankSpaces(11);	makeBColour(BACKGROUND_RED);	printf("\n ");	
	SetConsoleTextAttribute(h, scheme);
	printf("\n "); blankLines(1);
	blankSpaces(10); 
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 2. ");
	SetConsoleTextAttribute(h,116); printf("\nReport ");
	SetConsoleTextAttribute(h,116); printf("\nan ");
	SetConsoleTextAttribute(h,116); printf("\nEmergency ");
	SetConsoleTextAttribute(h,116); blankSpaces(16);
	SetConsoleTextAttribute(h, scheme);
	makeBColour(BACKGROUND_RED);	printf("\n "); blankLines(1); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10); 
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 3. ");
	SetConsoleTextAttribute(h,116); printf("\nPay ");
	SetConsoleTextAttribute(h,116); printf("\nBill ");
	SetConsoleTextAttribute(h,112); blankSpaces(27);
	SetConsoleTextAttribute(h, scheme);
	makeBColour(BACKGROUND_RED);	printf("\n "); blankLines(1); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10);
	SetConsoleTextAttribute(h,116); blankSpaces(10); printf("\n 4. ");
	SetConsoleTextAttribute(h,116); printf("\nFind ");
	SetConsoleTextAttribute(h,116); printf("\nCustomer ");
	SetConsoleTextAttribute(h,116); blankSpaces(22);
	SetConsoleTextAttribute(h, scheme);
	makeBColour(BACKGROUND_RED);	printf("\n "); blankLines(1); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10); 
	SetConsoleTextAttribute(h,112); blankSpaces(10); printf("\n 0. ");
	SetConsoleTextAttribute(h,112); printf("\nExit");
	SetConsoleTextAttribute(h,112); blankSpaces(32);
	makeBColour(BACKGROUND_RED);	printf("\n "); printf("\n"); SetConsoleTextAttribute(h, scheme);
	blankSpaces(10);
	SetConsoleTextAttribute(h,112); printf("\n                                                  "); makeBColour(BACKGROUND_RED);	printf("\n "); printf("\n");
	SetConsoleTextAttribute(h, scheme);
	blankSpaces(11);
	makeBColour(BACKGROUND_RED);	printf("\n                                                  ");
}

int standardBg()
{
	int choice;
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");
	
	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	system("cls");

	blankLines(1);
	SetConsoleTextAttribute(h, 112);	printf("\n _______ _____   _____  _____  " );	makeBColour(BACKGROUND_RED); SetConsoleTextAttribute(h, typConsoleApp); 	blankSpaces(11); SetConsoleTextAttribute(h, 112); printf("\n                               "); 						printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n|__ _ __|   _  \\|  ___ / ____| "); makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n   Line 1 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n   Line 4 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n "); 	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   | |  |  |_|  | |___| |      " ); makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n                               "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");		printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   | |  |   _  /|  ___| |      " ); makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n   Line 2 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n   Line 5 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   | |  |  |_| \\| |___| |____  ");	makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n                               "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n   |_|  |______/|_____ \\_____| ");	makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n   Line 3 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n   Line 6 :  "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");	printf("\n");
	SetConsoleTextAttribute(h, 112);	printf("\n                               ");	makeBColour(BACKGROUND_RED);	printf("\n "); SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, 112);	printf("\n                               "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");		printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(1); makeBColour(BACKGROUND_RED); printf("\n                               ");	SetConsoleTextAttribute(h, typConsoleApp);	blankSpaces(10); SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(1);	SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n                               ");		

	SetConsoleTextAttribute(h, typConsoleApp);

	standardMenu(typConsoleApp);

	blankLines(3);

	SetConsoleTextAttribute(h, 112); printf("\n                                             "); printf("\n");
	SetConsoleTextAttribute(h, 112); printf("\n   "); SetConsoleTextAttribute(h, BACKGROUND_GREEN | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n - OPEN"); SetConsoleTextAttribute(h, 112); printf("\n   "); SetConsoleTextAttribute(h, BACKGROUND_BLUE | BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n - ON CALL"); SetConsoleTextAttribute(h, 112); printf("\n   "); SetConsoleTextAttribute(h, BACKGROUND_RED| BACKGROUND_INTENSITY); printf("\n  "); SetConsoleTextAttribute(h, 112); printf("\n - OFFLINE");  SetConsoleTextAttribute(h, 112); printf("\n   ");  SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n ");   printf("\n");
	SetConsoleTextAttribute(h, 112); printf("\n                                             "); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n "); printf("\n");
	SetConsoleTextAttribute(h,typConsoleApp); blankSpaces(1); SetConsoleTextAttribute(h, BACKGROUND_RED); printf("\n                                             ");

	SetConsoleTextAttribute(h, 132);
	gotoxy(47, 23);

	
	fflush(stdin);scanf("%i", &choice);
	

	return choice;
}

void tableHeader()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD typConsoleApp;
	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");
	
	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;


	blankSpaces(10); SetConsoleTextAttribute(h, BACKGROUND_BLUE); blankSpaces(58); SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(10); SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n "); SetConsoleTextAttribute(h, 113); blankSpaces(25); printf("\nOUTAGES"); blankSpaces(25); SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n "); printf("\n"); //57 spaces.
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(10); SetConsoleTextAttribute(h, BACKGROUND_BLUE); blankSpaces(58); SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(10); SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n "); SetConsoleTextAttribute(h, 113); blankSpaces(57); SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(10); SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n "); SetConsoleTextAttribute(h, 113); blankSpaces(10); printf("\nTIME"); blankSpaces(13);SetConsoleTextAttribute(h, 113); printf("\n||");SetConsoleTextAttribute(h,113);blankSpaces(11); printf("\nDATE"); blankSpaces(13);  SetConsoleTextAttribute(h, BACKGROUND_BLUE); printf("\n ");
	printf("\n");

}