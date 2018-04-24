//DIALOG BOXES
void accessGranted(void)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("           ACCESS GRANTED!"); blankSpaces(11); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                                 "); blankSpaces(4); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    LOGIN              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(62, 13);
}

void accessDenied(void)
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
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("           ACCESS DENIED!"); blankSpaces(12); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("     Press any key to try again."); blankSpaces(5); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    LOGIN              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(62, 13);
}

void prohibited(void)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  ACCESS DENIED!"); blankSpaces(19); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("  Administrative privileges required to proceed."); blankSpaces(3); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("               Press any key to exit."); blankSpaces(14); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(54);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    LOGIN              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	gotoxy(76, 13);
}

void loginExhaust(void)
{
	int i;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                  ACCESS DENIED!"); blankSpaces(19); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("      All four (4) login attempts have failed."); blankSpaces(5); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                                    "); blankSpaces(15); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 113); blankSpaces(54); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(54);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1,1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("                    LOGIN              "); blankSpaces(9); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	for(i = 5; i > 0; i--)
	{
		gotoxy(0, 13);
		SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("           Program will terminate in: %i...", i); blankSpaces(9); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
		Sleep(1000);
	}

	gotoxy(72, 13);
}
//****************************************************************************************************

void getPassword(char *password) //only backspace and home buttons allowed to undo mistakes
{
	int ch, i = 0;

	do
	{
		ch = _getch(); //get input

		switch(ch)
		{
			default:

				if(i == 20)
				{
					continue;
				}

				password[i] = ch; //copies input to string

				password[i + 1] = '\0';
				
				i++; //increments character count
				
				putchar('*');
				
				break;

			case 8: //backspace key
				if(i) //check for empty string
				{
					printf("\b \b"); //remove character preceding backspace from screen

					password[i - 1] = '\0';

					--i; //reduces character account
				}
				else
				{
					i = 0;
				}

				break;

			case 13:
				ch = !i? 0 : ch; //to ensure loop continues
				break;

			case 224: 
				ch = _getch();
				switch(ch)
				{
					case 72: //up arrow key
						while(i)
						{
							printf("\b \b"); 

							i--;
						}

						i = 0;
						break;

					default:
						break;
				}
				break;

			case 0:
				ch = _getch();
				break;

			case 9: //tab key
				break;
		}
	}while(ch !=  13); //Enter key = 13
}

int createPassword(void)
{
	FILE *fp;

	int match;

	char password[21], passwordCheck[21];
	
	do
	{
		puts("\nCreate password:");
		getPassword(password);

		puts("\nRe-enter password:");
		getPassword(passwordCheck);

		if(match = !!strcmp(password, passwordCheck))
		{
			printf("\nFields do not match! ");
			system("pause & cls");
		}
	}while(match != 1);

	system("ATTRIB -H  -R System.dat>NUL"); //removes 'read-only' and 'hidden' attributes if file existent

	if((fp = fopen("System.dat", "wb+")) == NULL)
	{
		system("ATTRIB +H +R System.dat>NUL");

		fprintf(stderr, "Password file could not be created. ");
		system("pause & cls");
		
		return 0;
	}
	else
	{
		fwrite(password, sizeof(char), strlen(password) + 1, fp);
		fclose(fp);
	}
	system("ATTRIB +H +R System.dat>NUL"); //hides file and makes it read only

	return 1;
}

int readPassword(Account a[])
{
	int i = 0,size;
	FILE *fp;

	system("ATTRIB -H System.dat>NUL"); //redirected to NUL to avoid echo if file doesn't exist, causes read error if file not unhidden

	if((fp = fopen("System.dat", "rb")) != NULL)
	{
		fseek(fp,0,SEEK_SET);
		fread(&size,sizeof(int),1,fp);
		do
		{
			fseek(fp,sizeof(int) + i*sizeof(Account),SEEK_SET);
			fread(&a[i], sizeof(Account), 1, fp);
			i++;
		}while(i<size);
		fclose(fp);
		system("ATTRIB +H System.dat>NUL"); //hide file again
	}
	return i;
}

int password(Account *acc)
{
	int match,size,i;
	Account a[20];
	char pass[21], user[10];

	size=readPassword(a);
	
	puts("\nEnter ID");
	
	fflush(stdin);gets(user);
	
	puts("\nEnter password:");
	getPassword(pass);
	
	for(i=0;i<size;i++)
	{
		match = (!strcmp(user,a[i].ID) && !(strcmp(pass, a[i].pass)));
		if(match==1)
		{
			match=a[i].clearance+1;
			*acc=a[i];
			break;
		}
	}

	return match;
}

int login(Account *acc)
{
	int match, size, i = 0, j, k;
	
	Account a[20];
	
	char pass[21], user[100];

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	WORD typConsoleApp;

	CONSOLE_SCREEN_BUFFER_INFO typScrApp;

	size = readPassword(a);

	system("color 85");

	GetConsoleScreenBufferInfo(h, &typScrApp);
	typConsoleApp = typScrApp.wAttributes;

	blankLines(5);
	
	blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40);  printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("ENTER ID: "); blankSpaces(27); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("PASSWORD: "); blankSpaces(27); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

	SetConsoleTextAttribute(h, 113);

	gotoxy(1, 1);
			
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("             LOGIN ATTEMPT %i OF 4              ", i + 1); blankSpaces(1); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
	SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

	SetConsoleTextAttribute(h, 113);

	do
	{
		gotoxy(33, 7);
		fflush(stdin);
		gets(user);
		fflush(stdin);

		gotoxy(33, 10);
		getPassword(pass);

		for(j = 0; j < size; j++)
		{
			match = (!strcmp(user, a[j].ID) && !(strcmp(pass, a[j].pass)));
			if(match == 1)
			{
				match = a[j].clearance + 1;
				*acc = a[j];
				break;
			}
		}
		
		if(match == 0)
		{
			if(i == 3)
			{
				return 0;
			}

			system("cls");
			accessDenied();
			_getch();
			system("cls & color 85");

			blankLines(5);
	
			blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40);  printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("ENTER ID: "); blankSpaces(27); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("PASSWORD: "); blankSpaces(27); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(20); SetConsoleTextAttribute(h, 113); blankSpaces(40); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(21); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(40);

			SetConsoleTextAttribute(h, 113);

			i++;

			gotoxy(1,1);
			
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(15); SetConsoleTextAttribute(h, 116); blankSpaces(3); printf("             LOGIN ATTEMPT %i OF 4              ", i + 1); blankSpaces(1); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(16); SetConsoleTextAttribute(h, 113); blankSpaces(51); SetConsoleTextAttribute(h, BACKGROUND_RED); printf(" "); printf("\n");
			SetConsoleTextAttribute(h, typConsoleApp); blankSpaces(17); SetConsoleTextAttribute(h, BACKGROUND_RED); blankSpaces(51);

			SetConsoleTextAttribute(h, 113);
		}

		gotoxy(33, 7);
	}while(match == 0 && i < 4); //user validation

	return match;
}
