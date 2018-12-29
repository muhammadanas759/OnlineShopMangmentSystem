#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <alloc.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<time.h>
#include<ctype.h>


//******************IMAGE PUTTING FUNCTION**********************************//
struct BMP
{
char Type[2];
unsigned long Size;
unsigned long Reserved;
unsigned long OffSet;
unsigned long headsize;
unsigned long Width;
unsigned long Height;
unsigned long Planes;
unsigned long BitsPerPixel;
unsigned long SizeImage;
unsigned long Compression;
unsigned long XPixelsPerMeter;
unsigned long YPixelsPerMerer;
unsigned long ColorsUsed;
};
/*
typedef struct mSYSTEMTIME // S  T  R U  C  T
{
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
 */
typedef struct record{
	char i_name[50];
	int i_code;
	int i_price;
}recr;
recr rec;



void create_record()                         // R   E   C  O  R  D
{
	FILE *fp;
	fp=fopen("project.dat","ab+");
char another='y';
int i=0;
while(another=='y')
{
printf("Enter Name Of The Medicne: \t");
scanf("%s",rec.i_name);
printf("Enter Code: \t");
scanf("%d",&rec.i_code);
printf("Enter Price: \t");
scanf("%d",&rec.i_price);
fwrite(&rec,sizeof(rec),1,fp);
printf("ENTER Y FOR MORE");
another=getche();
i++;
}
fclose(fp);

}

void display()                    //  D I S P L A Y
{
	int i=0;
	FILE *fs;
	fs=fopen("project.dat","rb");
	while(i<20)
	{

	fread(&rec,sizeof(rec),1,fs);
	printf("%d\t%s %d\n",rec.i_code,rec.i_name,rec.i_price);
	i++;
	}
fflush(stdin);
	fclose(fs);
	printf("enter n to go to main");
	char goto_main=getche();
	if(goto_main=='n') {
	   }
}

void purchase()             // p   u   r   c   h   a   s     e
{

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
	p pur[20];
	int sum=0;

	printf("enter buyer name:");
	scanf("%s",b_name);
	FILE *fn;
	fn=fopen(b_name,"at+");
	fprintf(fn,"ITEM NAME\t QUANTITY \t ITEM PRICE/=\tTOTAL");
		int j=0;

	while(chk=='y')
	{
		printf("enter item name:");
		scanf("%s",pur[i].item_name);
		printf("enter quntity of items which will you buy:");
		scanf("%d",&pur[i].quant);
		printf("%s",pur[i].item_name);

	FILE *fs;
	fs=fopen("project.dat","rb");

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
		printf("\nthe grand total is =   %d",sum);

		fprintf(fn,"\n%s\t\t  %d\t%d\t\t%d\n",pur[i].item_name,pur[i].quant,rec.i_price,pur[i].rate);
		i++;
		printf("\n=====================================================================");
		printf("\n enter 'Y' for more addition 'N' for menu");
		chk=getche();
		printf("\n=====================================================================\n");


	}
       }








int ShowBMP(int x, int y, char* FileName)
{
int b,a;
BMP Obj;
unsigned char* Datas;
int in=0;
unsigned char c=0;
FILE *fp;
fp=fopen(FileName,"rb");
if(!fp)
{
printf("ERROR");
return 0;
}
fread(&Obj,sizeof(Obj),1,fp);


fseek(fp,Obj.OffSet,SEEK_SET);
Datas=(unsigned char*) calloc(Obj.Width/2+1, sizeof(unsigned char));
for(b=Obj.Height;b>=0;b--)
{
fread(Datas,sizeof(unsigned char),Obj.Width/2,fp);
c=0;
in=0;
for(a=0;a<=Obj.Width;a+=2)
{
c=Datas[in]| 0x00>>4;
putpixel(a+x,b+y,c);
c=(Datas[in]|0xF0)& 0x0F;
putpixel(a+1+x,b+y,c);
in++;
}
}
fflush(stdin);
free(Datas);
fclose(fp);
return 1;
}
//*************************FUNCTION END************************************//


int main()
{       char a[20];
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(3);
	delay(1000);
	setcolor(1);
	setfillstyle(SOLID_FILL,15);
	fillellipse(320,240,100,100);
	delay(1000);
	settextstyle(4,HORIZ_DIR,7);
	sprintf(a,"TMA");
	outtextxy(255,200,a);
	delay(1000);
	float i=0,j=2;
	setcolor(WHITE);
	while((i<=359)||(j<=360))
	{
	pieslice(320,240,i,j,100);
	i+=0.15;
	j+=0.15;
	}
	int k;
	for(k=110;k<=1000;k+=3)
	{
	fillellipse(320,240,k,k);
	}
	closegraph();
	int color;
	int gda,gma;
	gda=VGA;
	gma=VGAHI;
	initgraph(&gda,&gma,"C:\\TURBOC3\\BGI");
	ShowBMP(0,0,"talha.bmp");
	getch();
	closegraph();


	clrscr();
      //	GetSystemTime(&str_t);
       //	me(&str_t);

	//printf("Year:%d\nMonth:%d\nDate:%d\nHour:%d\nMin:%d\nSecond:% d\n"
	//,str_t.wYear,str_t.wMonth,str_t.wDay
	//,str_t.wHour,str_t.wMinute,str_t.wSecond);

       //	printf("\t\t\t\t\t\t\t\t   %d/%d/%d\n" );
       //	str_t.wYear,str_t.wMonth,str_t.wDay);
       char choise;

	printf("PRESS 1 FOR PURCHASE\n");

	printf("PRESS 2 FOR DISPLAY DATABASE\n");

	printf("PRESS 3 FOR ENTER DATABASE\n");

	printf("PRESS 4 FOR CHANGING DATABASE\n");

	printf("PRESS 5 FOR EXIT\n");

	choise=getch();
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
		    //	change();
			break;
		case '5':
		return 0;
		break;
		default:
		main();

	}




return 1;
}
