#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct student
{ char name[10];
int age;
}x[1];
void write_file(FILE *fp,struct student *x);
int main()
{
FILE *fp;
int i;
fp=fopen("std_array.txt","w");

for(i=0;i<2;i++)
{

printf("enter the name of %d student:",i+1);
scanf("%s",x[i].name);
printf("enter the age of %d student:",i+1);
scanf("\n%d",&x[i].age);

write_file(fp,&x[i]);
}
fclose(fp);

}


void write_file(FILE *fp,struct student *x)
{ fprintf(fp,"%s\n",x->name);
  fprintf(fp,"%d\n",x->age);
}

