#include<stdio.h>
#include<conio.h>
#include<string.h>

//20 books and 10 students
struct student
{
    char student_id[20];
    char student_name[20];
    char branch[20];
    int year;
};
struct book
{
    char book_id[10];
    char book_title[40];
    int no_of_page;
    float price;
};

struct issue
{
  char book_id[10];
  char student_id[10];
  int status;

};

void main()
{
    struct student s[10] =
    {
	{"ab","Akshat","CSE",1},
	{"cd","B","AI",2},
	{"ef","C","IT",3},
	{"gh","D","ECE",4},
	{"ij","E","ME",1},
	{"kl","F","CSE",2},
	{"mn","G","AI",3},
	{"op","H","IT",4},
	{"qr","I","ECE",1},
	{"st","J","ME",2},
    };
    struct book b[20] =
    {
	{"A","A", 100, 255.5},
	{"B","B", 200, 265.5},
	{"C","C", 300, 275.5},
	{"D","D", 400, 285.5},
	{"E","E", 500, 295.5},
	{"F","F", 600, 305.5},
	{"G","G", 700, 315.5},
	{"H","H", 800, 325.5},
	{"I","I", 900, 335.5},
	{"J","J", 1000, 345.5},
	{"K","K", 100, 355.5},
	{"L","L", 200, 365.5},
	{"M","M", 300, 375.5},
	{"N","N", 400, 385.5},
	{"O","O", 500, 395.5},
	{"P","P", 600, 405.5},
	{"Q","Q", 700, 415.5},
	{"R","R", 800, 425.5},
	{"S","S", 900, 435.5},
	{"T","T", 1000, 445.5},
    };
    //Practical Start
    struct issue i[20];
    int ch,flag=0,flags=0,flagb=0,flagi=0,indexb;
    char cont,ts_id[10],tb_id[10];
    // clrscr();

do{ 
	// clrscr();
    printf("\n\nLIBRARY MENU:");
    printf("\n\t1. Issue");
    printf("\n\t2. Deposit");
    printf("\n\t3. Show Issued Books");
    printf("\n\t4. List of Students who have no issued book");
    printf("\n\tEnter Choice:");
    scanf("%d",&ch);

    switch(ch)
    {
     case 1:   
	//   clrscr();
		printf("\nEnter Student ID:");
		scanf(" %s",&ts_id);
		printf("\nEnter Book ID:");
		scanf(" %s",&tb_id);

		//Student Verification
		for(int j=0;j<10;j++)
		if( strcmpi(ts_id,s[j].student_id)==0 )
			{
			flags=1;
			}

		//Book Verification
		for(int j=0 ; j<20 ;j++)
		{if( strcmpi(tb_id,b[j].book_id)==0 )
			{
			flagb=1;
			indexb=j;
			}
		}

		//Issue List Verification
		//for(j=0;j<20;j++)
		 if(i[indexb].status==1)
		  {printf("\nSorry Book Already Issued!");
		   flagi=1;
		   getch();
		   break;
		  }


		if(flagb==1 && flags==1 && flagi==1)
		{strcpy(i[indexb].student_id,ts_id);
		strcpy(i[indexb].book_id,tb_id);
		i[indexb].status=1;
		printf("\n%s Book Issued to %s",i[indexb].book_id,i[indexb].student_id);
		flagb=0;
		flags=0;
		flagi=0;
		}
		else
		{printf("\nInvalid ID");
		}

		break;

     case 2:    
	//  clrscr();
		printf("\nEnter Student ID:");
		scanf(" %s",&ts_id);
		printf("\nEnter Book ID:");
		scanf(" %s",&tb_id);

		//Book Verification
		for(int j=0;j<20;j++)
		{if( strcmpi(tb_id,b[j].book_id)==0 )
			{
			flagb=1;
			indexb=j;
			}
		}

		if(strcmpi(ts_id,s[indexb].student_id)==0 &&  i[indexb].status==1)
		   {printf("\nBook Deposited to Library!");
		   i[indexb].status=0;
		   strcpy(i[indexb].student_id,NULL);
		   }

		break;

     case 3:  
	//    clrscr();
		for(int j=0;j<20;j++)
		{if(i[j].status==1)
		printf("\nBook ID: %s is Issued By: %s",i[j].book_id,i[j].student_id);
		}
		break;

     case 4:   
	//   clrscr();
		for(int k=0;k<10;k++)
		{flag=0;
		for(int j=0;j<20;j++)
			{if(strcmpi(s[k].student_id,i[j].student_id)==0)
			 flag=1;
			}
		if(flag==0)
		{printf("\n %s has not issued any book now.",s[k].student_id);
		}
		}
		break;

     default:printf("Invalid Input!!!");

    }
    printf("\nEnter Y/y to continue:");
    scanf(" %c", &cont);
    }while(cont=='Y'|| cont=='y');

    getch();

}