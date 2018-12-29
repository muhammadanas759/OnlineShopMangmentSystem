#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>


int main()
{       char a[20];
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setbkcolor(14);
	delay(1000);
	setcolor(1);
	setfillstyle(SOLID_FILL,15);
	fillellipse(320,240,100,100);
	delay(1000);
	settextstyle(4,HORIZ_DIR,7);
	sprintf(a,"TMA");

	outtextxy(255,200,a);
	delay(2000);
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
	getch();
	closegraph();


return 1;
}