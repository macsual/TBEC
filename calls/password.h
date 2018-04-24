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

//int createPassword(void)
//{
//	FILE *fp;
//
//	int match;
//
//	char password[21], passwordCheck[21];
//	
//	do
//	{
//		puts("Create password:");
//		getPassword(password);
//
//		puts("\n\nRe-enter password:");
//		getPassword(passwordCheck);
//
//		if(match = !!strcmp(password, passwordCheck))
//		{
//			printf("\n\nFields do not match! ");
//			system("pause & cls");
//		}
//	}while(match != 1);
//
//	system("ATTRIB -H  -R system.dat>NUL"); //removes 'read-only' and 'hidden' attributes if file existent
//
//	if((fp = fopen("system.dat", "wb+")) == NULL)
//	{
//		system("ATTRIB +H +R system.dat>NUL");
//
//		fprintf(stderr, "Password file could not be created. ");
//		system("pause & cls");
//		
//		return 0;
//	}
//	else
//	{
//		fwrite(password, sizeof(char), strlen(password) + 1, fp);
//		fclose(fp);
//	}
//	system("ATTRIB +H +R system.dat>NUL"); //hides file and makes it read only
//
//	return 1;
//}

Account readPassword(char username[])
{
	int i,size;
	Account temp,fail={-999,"-999","-999","-999"};

	FILE *fp;

	system("ATTRIB -H system.dat>NUL"); //redirected to NUL to avoid echo if file doesn't exist, causes read error if file not unhidden

	if((fp = fopen("System.dat", "rb")) == NULL)
	{
		puts("File missing from system");
		puts("Is this the first time you are using the system?Y/N");
		if(toupper(getchar())=='N')
		{
			puts("Critical error, contact your system administrator");
			return fail;
		}
		else
		{
			puts("Contact system administrator so that accounts are properly set up");
			return fail;
		}
	}
	else
	{
		fread(&size,sizeof(int),1,fp);
		for(i=0;i<size;i++)
		{
			fseek(fp,sizeof(int) + sizeof(Account)*i,SEEK_SET);
			fread(&temp, sizeof(Account), 1, fp);
			if(strcmp(temp.ID,username)==0)
			{
				fclose(fp);
				return temp;
			}
		}
		fclose(fp);
		return emptyAccount;
		system("ATTRIB +H system.dat>NUL"); //hide file again
	}

}

void readUsername(char name[])
{
	printf("ID:");
	gets(name);
}

int passInput(Account *acc)
{
	int match;
	Account a;
	char pass[21], username[10];

	readUsername(username);
	a=readPassword(username);
	
	if(a.clearance==-999)
	{
		return -999;
	}
	
	*acc=a;

	if(a.clearance==-9)//Account does not exist
	{
		puts("Enter password:");
		getPassword(pass);
		return 0;
		//match = createPassword();
	}
	else
	{
		puts("Enter password:");
		getPassword(pass);
		match = (strcmp(pass, a.pass)==0 && 0==strcmp(username,a.ID));
	}
	
	return match;
}

int availableLine(char ID[])//Determine which line account will go onto;If account is already signed in, cannot sign in again
{
	FILE *fp;
	int i,sys, line[6],newLine=-1;
	char id[6][5];

	if((fp=fopen("CallLines.dat","rb"))==NULL)
	{
	}
	else
	{
		fseek(fp,0,SEEK_SET);
		fread(&sys,sizeof(int),1,fp);
		if(sys==0)
		{
			return -1;
		}
		for(i=0;i<6;i++)
		{
			fseek(fp,sizeof(int) + i*(sizeof(char)*5 +sizeof(int)),SEEK_SET);			
			fread(&line[i],sizeof(int),1,fp);
			fread(&id[i],sizeof(char),5,fp);
			//fscanf(fp,"%i %s",&line[i],id[i]);
			if(strcmp(id[i],ID)==0)
			{
				fclose(fp);
				return -1;
			}
			else
			{
				if(line[i]==0 && newLine==-1)
				{
					newLine=i;
				}
			}
		}
		fclose(fp);
		return newLine + 1;
	}
}

int login(Account *a)
{
	int match, i = 0;

	do
	{
		i++;
		printf("Login attempt %i of 4\n\n", i);
		match = passInput(a);

		if(match ==-999)
		{
			exit(EXIT_FAILURE);
		}

		printf((match==1) ? "\nLogin successful! " : "\n\nAccess denied! ");//Only regular users use this program
		system("pause & cls");
	}while(match==0 && i < 4);

	return match;
}