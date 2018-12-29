	#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 	struct STUDENT
{char name[50];
int age;
float height;
};

int main()
{
		FILE *fp;
fp=fopen("file_malloc.txt","w");
	int n;
	printf("Enter Number of Students\n\n");
	scanf("%d",&n);
	struct STUDENT *ptr=(struct STUDENT*)malloc(n*sizeof(struct STUDENT));
   
	
	for(int i=0;i<n;i++)
	{
	
	printf("Enter name of student\n");
	scanf("%s",ptr->name);
	fprintf(fp,"\n%s\n",ptr->name);
	printf("Enter age of student\n ");
	scanf("%d",&ptr->age);
		fprintf(fp,"%d\n",ptr->age);
	printf("Enter height of student\n ");
	scanf("%f",&ptr->height);
		fprintf(fp,"%f\n",ptr->height);
	

}

}




	


  




