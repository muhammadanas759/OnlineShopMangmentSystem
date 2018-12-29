#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct record{
	char i_name[20];
	int i_code;
	int i_price;
}recr;
recr rec;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void create_record();

int main(int argc, char *argv[]) {
	create_record();
	return 0;
}
void create_record()
{
	FILE *fp;
	fp=fopen("project.dat","wb");
char another='y';
while(another=='y')
{
printf("Enter Name Of The Medicne: \t");
scanf("%s",rec.i_name);
printf("Enter Code: \t");
scanf("%d",&rec.i_code);

fwrite(&rec,sizeof(rec),1,fp);
printf("y for continue n for exit");
printf("Enter Price: \t");
scanf("%d",&rec.i_price);
another=getch();
fclose(fp);
}
}
