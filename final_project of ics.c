#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<time.h>
#include<ctype.h>
#include<windows.h>

typedef struct mSYSTEMTIME {
		WORD wYear;
		WORD wMonth;
		WORD wDayOfWeek;
		WORD wDay;
		WORD wHour;
		WORD wMinute;
		WORD wSecond;
		WORD wMilliseconds;
	} gSYSTEMTIME;
	gSYSTEMTIME str_t;

typedef struct record{
	char i_name[50];
	int i_code;
	int i_price;
}recr;
recr rec;


void date();
void create_record();
void purchase();
void display();
void change();



int main()

{
	system("cls");
	//GetSystemTime(&str_t);


	//printf("Year:%d\nMonth:%d\nDate:%d\nHour:%d\nMin:%d\nSecond:% d\n",str_t.wYear,str_t.wMonth,str_t.wDay,str_t.wHour,str_t.wMinute,str_t.wSecond);
	
	printf("\t\t\t\t\t\t\t\t   %d/%d/%d\n",str_t.wYear,str_t.wMonth,str_t.wDay);	
	char choise;

	
//gotoxy(26,33);
printf("******************************WELCOME TO MEDICAL STORE**************************\n\n");
	
    printf("\t\t\tPRESS 1 FOR PURCHASE\n\n");
//gotoxy(26,33);
	printf("\t\t\tPRESS 2 FOR DISPLAY DATABASE\n\n");
//gotoxy(26,33);
	printf("\t\t\tPRESS 3 FOR ENTER DATABASE\n\n");
//gotoxy(26,33);
	printf("\t\t\tPRESS 4 FOR EDITITNG DATABASE\n\n");
//gotoxy(26,33);
	printf("\t\t\tPRESS 5 FOR EXIT\n");
printf("******************************-------------------------**************************\n\n");	

	choise=getche();
	switch(choise)
	{
		case'1':
		purchase();
		break;
		case'2':
		display();
		break;
		case'3':
		create_record();
		break;
		case'4':
			change();
			break;
		case '5':
		return 0;
		break;
		default:
		main();
		
	}

		return 0;
}



void create_record()
{
	FILE *fp;
	fp=fopen("projecta.dat","ab+");
char another='y';
int i=0;
while(another=='y')
{
printf("******************************WELCOME TO CREATE MEDICINES**************************\n\n");
printf("Enter Name Of The Medicne: \t");
scanf("%s",rec.i_name);
printf("Enter Code: \t");
scanf("%d",&rec.i_code);
printf("Enter Price: \t");
scanf("%d",&rec.i_price);
fwrite(&rec,sizeof(rec),1,fp);
printf("ENTER Y FOR MORE MEDICINES\n");
another=getche();
i++;
}
fclose(fp);

}




void display()
{
	
	int i=0;
	char goto_main;
	FILE *fs;
    printf("******************************WELCOME TO DISPLAY ALL ITEMS**************************\n\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("item name\t\titem code\t\titem price\n");
	printf("---------------------------------------------------------------------------------\n");
	
	fs=fopen("projecta.dat","rb");
	while(i<20)
	{
	
	fread(&rec,sizeof(rec),1,fs);
	printf("%s\t\t\t%d\t\t\t\t  %d\n",rec.i_name,rec.i_code,rec.i_price);

i++;}
fflush(fs);//instead of stdin
	fclose(fs);
	printf("enter n to go to main");
	 goto_main=getche();
	if(goto_main=='n')
	main();
}




void purchase()
{
	printf("-------------------------**WELCOME FOR PERCHASING**--------------------------------------\n");
	
	char b_name[20];
	char chk='y';
	int i=0,n=20;
	
	typedef struct fun
	{
		char item_name[10];
		int price;
		int quant;
		int rate;
	}p;
	p pur[n];
	
	int sum=0;
	
	printf("enter buyer name:\n");
	scanf("%s",b_name);
	printf("-------------------------------------------------------------------------------------\n");
	
	FILE *fn;
	fn=fopen(b_name,"at+");
	fprintf(fn,"ITEM NAME\t QUANTITY \t ITEM PRICE/=\tTOTAL");
		int j=0;
	
	while(chk=='y')
	{
		printf("\t\t\t 1)enter item name:");
		scanf("%s",pur[i].item_name);
		printf("\n\t\t\t 2)enter quntity of items which will you buy:");
		scanf("%d",&pur[i].quant);
		printf("%s",pur[i].item_name);
		printf("\n-----------------------WRITE SUCCESSFULLY----------------------------------\n");
	FILE *fs;
	fs=fopen("projecta.dat","rb");
		
		while(j<20)
		{
			fread(&rec,sizeof(rec),1,fs);
			
			if((strcmp(pur[i].item_name,rec.i_name)==0))
			{
				//int price=rec.i_price;
				pur[i].rate=(rec.i_price)*(pur[i].quant);
				
				sum=sum+pur[i].rate;
				
				printf("\nTHE TOTAL PRICE IS = %d/=",(rec.i_price)*(pur[i].quant));
				
				break;
			}
			
			j++;
		}
		printf("\n---------------------------------------------------------------------\n");
		printf("\nthe grand total is =   %d",sum);
		printf("\n--------------------------------------------------- -----------------\n");
		fprintf(fn,"\n%s\t\t%d\t\t%d\t\t\t%d\n",pur[i].item_name,pur[i].quant,rec.i_price,pur[i].rate);
		i++;
		printf("\n============================================================================");
		printf("\n enter 'Y' for more addition 'N' for menu");
		chk=getche();
		printf("\n=============================================================================\n");
		
		
	}
	main();
}




void change()
{
	
printf("**********************************************************************************");
	int i=0;
	FILE *fe;
	fe=fopen("projecta.dat","rb");
	//fseek(fe,0,SEEK_END);
	while(i<20)
	
	{
	fread(&rec,sizeof(rec),1,fe);
	
	printf("%s\t%d %d\n",rec.i_name,rec.i_code,rec.i_price);
i++;}
fflush(stdin);
	fclose(fe);
printf("**********************************************************************************");
	
	
char choise;
int choice;
char x[2];
int j=0;
 FILE *fw;

 printf("EDIT RECORDS\n");
 printf("Enter Item Code: ");
 
 scanf("%s",&x);
  fw=fopen("projecta.dat","a+b");
  printf("file have been opened");
 rewind(fw);
  while (j<20)
  { 
  fread(&rec.i_code,sizeof(rec),1,fw);
   printf("\ni am in while loop");
   //if(strcmp(rec.i_code,x)!=0)
   {
   	printf("\nName Of Item %s",rec.i_name);
    printf("\ndo you want to edit this record(y/n):");
    fflush(fw);
    choise=getche();
    if(choise=='y')
    {
     printf("\n1- edit name ");
     printf("\n2- edit rate ");
     scanf("%d",&choice);
     switch(choice){
      case 1:
       system("cls");
       printf("EDIT RECORDS\n");
       printf(" \nenter new name: ");
       scanf("%s",&rec.i_name);
       fseek(fw,-(sizeof(rec)),SEEK_CUR);
	   fwrite(&rec,sizeof(rec),1,fw);
       break;
      case 2:
       system("cls");
       printf("\nEDIT RECORDS");
       printf(" \nenter new price: ");
       scanf("%d",&rec.i_price);
       fseek(fw,-(sizeof(rec)),SEEK_CUR);
	   fwrite(&rec,sizeof(rec),1,fw);
       break;
	 default:
	 	printf("\nby default");
	   //change();
    }
    j++;
     break;
    }
       }
       //else
    printf("\nwork has been done");

 

 //main();
 fclose(fw);
main();
}
printf("\nNow, we are out of while loop");
 
}

