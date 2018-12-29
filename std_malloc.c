#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct student
{ char name[10];
int age;
};
struct student *ptr;
int main()
{
FILE *fp;
int i,n;
fp=fopen("std_malloc.txt","w");
printf("enter the number of student:");
scanf("%d",&n);
ptr=(struct student*)malloc(n*sizeof(struct student));
for(i=0;i<n;i++)
{

printf("enter the name of %d student:",i);
scanf("%s",ptr->name);
printf("enter the age of %d student:",i);
scanf("\n%d",&ptr->age);
fprintf(fp,"%s\t%d\n",ptr->name,ptr->age);
}

fclose(fp);
getch();
return 0;
}




