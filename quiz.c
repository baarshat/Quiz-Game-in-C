#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<unistd.h>
void show_record();
void help();
struct details{
	char username[20];
	char password[20];
	int score;}u[1000];
int reg(){
	  system("cls");
    FILE *fp;
    char uname[20],pword[20];
    fp=fopen("userreg.txt","a");
    fflush(stdin);
    printf("Enter a username: ");
    gets(uname);
    printf("Enter password: ");
    gets(pword);
    fprintf(fp,"%s\n%s\n",uname,pword);
    fclose(fp);
    printf("\n\nNew account successfully created!\n");
		getch();
    sleep(2);
		mainhome();}
int login()
{
    FILE *fp;
    struct details x[30];
    char uname1[20],pword1[20],ch;
    int count=0;
    fp=fopen("userreg.txt","r");
    int i=0;
        while((fscanf(fp,"%s%s",x[i].username,x[i].password))!=EOF)
        {
            i++;
        }
    fclose(fp);
    key:
    system("cls");
    memset(pword1,0,strlen(pword1));
    memset(uname1,0,strlen(uname1));
    fflush(stdin);
    printf("\n\t\t\t\tUSERNAME: ");
    gets(uname1);
    printf("\n\t\t\t\tPASSWORD (PRESS TAB FOR ENTER): ");
    i=0;
    while(1)
    {
        ch=getch();
        if(ch=='\t')
        {
            break;
        }
        if(ch=='\b'&& i!=0)
        {
            i--;
            printf("\b");
        }
        else if(ch!='\b')
        {
            pword1[i]=ch;
            printf("*");
            i++;
        }
    }
    for(int i=0;i<30;i++)
    {
        if(strcmp(pword1,x[i].password)==0 && strcmp(uname1,x[i].username)==0)
        {
            count++;
        }
    }

    if(count>=1)
    {
        mainhome();
    }
    else
    {
        printf("\nInvalid Login");
        sleep(2);
        goto key;
    }
}
int mainhome(){
     char choice;
		 system("cls");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	mainhome();
	}
     else if (choice=='H')
	{
	help();
	getch();
	mainhome();
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
      question();
		
    }
  }
int mainhome1(){
     char choice;
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	mainhome1();
	}
   
	else if (choice=='Q')
	exit(1);
  
  }	
int question(){
		FILE *fp; 
    int r,i,num,score,count;
    char choice;
    system("cls");
    printf("\n ------------------  Welcome to C Program Quiz Game --------------------------");
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> In this game, you will be asked a total of 20 questions.");
    printf("\n    Each right answer will increase a point!");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option and press enter.");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
    {
			count=0;
     system("cls");
     
		for(r=1;r<=20;r++)
		{
     switch(r)	
		{
		case 1:
		system("cls");
		printf("\n\n1.Who is the father of C language?");
		printf("\n\nA.Steve Jobs\t\t\tB.James Gosling\n\nC.Dennis Ritchie\t\tD.Rasmus Lerdorf");
		if (toupper(getch())=='C')
			{count++;
			 getch();
			 break;
			}
		else
			 {break;
			 getch(); 
			 }

		case 2:
		system("cls");
		printf("\n\n2.Which of the following is not a valid C variable name?");
		printf("\n\nA.int number;\t\t\tB.float rate;\n\nC.int variable_count;\t\tD.int $main;");
		if (toupper(getch())=='D')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}
		  
		case 3:
		system("cls");
		printf("\n\n3.All keywords in C are in ____________");
		printf("\n\nA.LowerCase\t\tB.UpperCase\n\nC.CamelCase\t\tD.None");
		if (toupper(getch())=='A')
			{count++;
			 getch();
			 break;}
		else
			{getch();
			 break;}
		    
    case 4:
		system("cls");
		printf("\n\n4.Which is valid C expression?");
		printf("\n\nA.int my_num = 10,000;\t\tB.int my_num = 10000;\n\nC.int my num = 1000;\t\tD.int $my_num = 10000;");
		if (toupper(getch())=='B')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 5:
		system("cls");
		printf("\n\n5.Which of the following cannot be a variable name in C?");
		printf("\n\nA.volatile\t\tB.true\n\nC.friend\t\tD.export");
		if (toupper(getch())=='A')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 6:
		system("cls");
		printf("\n\n6.Which of the following declaration is not supported by C?");
		printf("\n\nA.String str;\t\t\tB.char *str;\n\nC.float str= 3e2;\t\tD.int c");
		if (toupper(getch())=='A')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

    case 7:
		system("cls");
		printf("\n\n7.What is an example of iteration in C?");
		printf("\n\nA.for\t\t\tB.while\n\nC.do-while\t\tD.all of the above");
		if (toupper(getch())=='D')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 8:
		system("cls");
		printf("\n\n8.Functions can return enumeration constants in C?");
		printf("\n\nA.true\t\tB.depends on the compiler\n\nC.false\t\tD.depends on the standard");
		if (toupper(getch())=='A')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 9:
		system("cls");
		printf("\n\n9.What is #include<stdio.h>?");
		printf("\n\nA.preprocessor directive\t\tB.inclusive directive\n\nC.file inclusion directive\t\tD.None");
		if (toupper(getch())=='A')
			{count++
			 ;getch();
			 break;}
		else
		  {getch();
			 break;} 

    case 10:
		system("cls");
		printf("\n\n10.The C-preprocessors are specified with _________ symbol.");
		printf("\n\nA.#\t\tB.$\n\nC.\" \"\t\tD.&");
		if (toupper(getch())=='A')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;} 

		case 11:
		system("cls");
		printf("\n\n11.How many number of pointer (*) does C have against a pointer variable declaration?");
		printf("\n\nA.7\t\tB.127\n\nC.255\t\tD.No limits");
		if (toupper(getch())=='D')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 12:
		system("cls");
		printf("\n\n12.In C language, FILE is of which data type?");
		printf("\n\nA.int\t\t\tB.char*\n\nC.struct\t\tD.None");
		if (toupper(getch())=='C')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

    case 13:
		system("cls");
		printf("\n\n13.What is the size of char in a 32-bit C compiller?");
		printf("\n\nA.1 bit\t\t\tB.1 byte\n\nC.2 Bits\t\tD.2 Bytes");
		if (toupper(getch())=='B')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

    case 14:
		system("cls");
		printf("\n\n14.What is meant by 'a' in the following C operation?");
		printf("\n\nfp = fopen(\"\"Random.txt\"\", \"\"a\"\");");
		printf("\n\nA.Attach\t\tB.Append\n\nC.Appprehend\t\tD.Add");
		if (toupper(getch())=='B')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;} 

		case 15:
		system("cls");
		printf("\n\n15.What will be the output of the following C code?");
		printf("\n\n #include <stdio.h>\nint main(){\n\tint y = 10000;\n\tint y = 34;\n\tprintf(\"\"Hello World! %%d\"\", y);\n\treturn 0;\n}");
		printf("\n\nA.Compile time error\t\tB.Hello World! 34\n\nC.Hello World! 1000\t\tD.Hello World! followed by a junk value");
		if (toupper(getch())=='A')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 16:
		system("cls");
		printf("\n\n16.What will happen if the following C code is executed?");
		printf("\n\n #include <stdio.h>\nint main(){\n\tint main = 3;\n\tprintf(\"\"%%d\"\", main);\n\treturn 0;\n}");
		printf("\n\nA.Compile time error\t\tB.Run without any error and prints 3\n\nC.Run-time error\t\tD.Experience infinite looping");
		if (toupper(getch())=='C')
			{count++;
			 getch();
			 break;;}
		else
		  {getch();
			 break;}

    case 17:
		system("cls");
		printf("\n\n17.What will be the output of the following C code on a 64 bit machine?");
		printf("\n\n#include <stdio.h>\nunion Sti{\n\tint nu;\n\tchar m;};\nint main(){\n\tunion Sti s;\n\tprintf(\"\"%%d\"\", sizeof(s));\n\treturn 0;\n}");
		printf("\n\nA.8\t\tB.9\n\nC.5\t\tD.4");
		if (toupper(getch())=='D')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 18:
		system("cls");
		printf("\n\n18.How many times i value is checked in the following C program?");
		printf("\n\n#include <stdio.h>\nint main(){\n\tint i = 0;\n\twhile (i < 3)\n\t\ti++;\n\tprintf(\"\"In while loop\"\");\n}");
		printf("\n\nA.1\t\tB.4\n\nC.3\t\tD.1");
		if (toupper(getch())=='C')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

		case 19:
		system("cls");
		printf("\n\n19.What will be the data type returned for the following C function?");
		printf("\n\n#include<stdio.h>\nint func(){\n\treturn(double)(char)5.0;\n}");
		printf("\n\nA.char\t\tB.double\n\nC.int\t\tD.multiple type-casting in return is illegal");
		if (toupper(getch())=='C')
			{count++;
			 getch();
			 break;}
		else
		  {getch();
			 break;}

    case 20:
		system("cls");
		printf("\n\n20.What is the meaning of the following C statement?");
		printf("\n\n printf(\"\"%%10s\"\", state); ");
		printf("\n\nA.10 spaces before the string state is printed\t\tB.Print empty spaces if the string state is less than 10 characters\n\nC.Print the last 10 characters of the string\t\tD.None of the mentioned");
		if (toupper(getch())=='B')
			{count++;
			 getch();
			 break;}
		else
		   {getch();
			 break;}
			 }
		}	 
    score:
    system("cls");
	  score=count;
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	   printf("\n\t You obtained %d points",score);

		fp=fopen("userreg.txt","a");
		fprintf(fp,"%d\n",score);
		fclose(fp);
		mainhome1();
		}
	}   
int main()
     {
		 char ch;
     logorreg:
		 system("cls");
		 printf("\t\t\t  C PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t       WELCOME ");
     printf("\n\t\t\t          to ");
     printf("\n\t\t\t       THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   CHECK YOUR KNOWLEDGE IN C!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
		 printf("\n\t\t\t Please Register or Login");
		 printf("\n\t\t----------------------------------------");
		 printf("\n\t\t|1.Register				|");
		 printf("\n\t\t|2.Login				|");
		 printf("\n\t\t----------------------------------------\n");

		ch=getch();
		 if (ch=='1')
		 {
			reg();
		 }
		 else if(ch=='2')
		  login();
		 else{
			goto logorreg;
		 }
		}
void show_record()
    {
			system("cls");
			char username[20],pw[20],usernames[100][20];
			int score,i=0,hs=0,temp=0,scores[100];
			FILE *fp;
   		fp=fopen("userreg.txt","r");
   
	 		while(!feof(fp))
			{
				fscanf(fp,"%s %s %d",username,pw,&score);
				//printf("%d %s",score,username);
   			strcpy(usernames[i],username);
				scores[i] = score;
				i++;
	 		}
			fclose(fp);
			//printf("%s %d",usernames[1],scores[1]);
	 for(int i=0;i<100;i++)
	 {
			if(scores[0]<scores[i] && scores[i]<25){
				scores[0]=scores[i];
				strcpy(usernames[0],usernames[i]);
			}
	 }
	 fclose(fp);
	 
			printf("\n\n\t\t*************************************************************");
			printf("\n\n\t\t %s has secured the Highest Score %d",usernames[0],scores[0]);
			printf("\n\n\t\t*************************************************************");
	
	getch();}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");
	  printf("\n >> In this game, you will be asked a total of 20 questions.");
    printf("\n    Each right answer will increase a point!");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> No negative marking for wrong answers!");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
	sleep(3);}

