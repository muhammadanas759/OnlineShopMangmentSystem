#include <stdio.h>
#include <conio.h>

struct student
{ char name[10];
int age;
}x[2];
int main()
{FILE *fp;
fp=fopen("std_array.txt","w");
int i;
for(i=0;i<=2;i++)
{

printf("enter the name:");
scanf("%s",x[i].name);
printf("enter the age:");
scanf("\n%d",&x[i].age);
fprintf(fp,"\n%s\n%d",x[i].name,x[i].age);
}
fclose(fp);

return 0;
getch();
}
