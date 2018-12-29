#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;
struct node* creatnode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return(n);
}
void insertnode()
{
	struct node *temp,*t;
	temp=creatnode();
	printf("enter the number:");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(start==NULL)
	start=temp;
	else
	{
	
		t=start;
		while(t->link!=NULL)
		t=t->link;
		t->link=temp;
		
	}
	}
	void deletenode()
	{ struct node *r;
	
	if(start==NULL)
		printf("list is empty");
		else 
		{
			r=start;
			start=start->link;
			free(r);
		}
	}
	void viewlist()
	{
	struct node *t;
	if(start==NULL)
	printf("list is empty");
	else
	{
		t=start;
		while(t!=NULL)
		{
		printf("%d",t->info);
		t=t->link;
	    }
}
		
}
 int menu()
 {
 int ch;
 printf("\n 1. Add value in list");
 printf("\n 2. Delete first node");
 printf("\n 3. View list");
 printf("\n 4. Exit");
 printf("////////////////////////////////////////////////////////");
 printf("\n\n 5. Enter your choice");
 scanf("%d",&ch);
 printf("/////////////////////////////////////////////////////////");
 return(ch);
 }
 void main()
 {
 	while(1)
 	{
	 clrscr();
 	switch(menu())
 	{
 	case 1:
 	insertnode();
 	break;
 	case 2:
 	deletenode();
 	break;
 	case 3:
 	viewlist();
 	break;
 	case 4:
 	exit(0);
 	default:
 	printf("invalid choice");
 	
 	}
 	getch();
 							
	 }
	 }
 



