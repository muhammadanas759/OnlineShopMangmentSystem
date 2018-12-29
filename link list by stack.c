#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int roll_no;
	struct node *link;
};
struct node *start=NULL;
struct node* creatnode()
{
	struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    return(temp);
}
void insert_node(){
	struct node *n,*t;
	n=creatnode();
	printf("enter the number:");
	scanf("%d",&n->roll_no);
	n->link==NULL;
	if(start==NULL)
	{start=n;
	}
	else
	{
	t=start;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=n;
	}
}
void del_node()
{struct node *temp;
if(start==NULL)
printf("empty");
else
{

	temp=start;
	start=start->link;
	free(temp);

}
	
}

void display()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
{
		printf("%d",temp->roll_no);
    temp=temp->link;	
}
}
int menu()
{int ch;
	printf(" 1 for adding value to the list");
		printf(" 2 deliting first node");
			printf(" 3 for display");
				printf(" 4 for exiting");
					printf("enter your choise");
					scanf("%d",&ch);
					return(ch);
}
int main() 
{
		while (1)
	{clrscr();
		switch(menu())
		{
			case 1:
				insert_node();
				break;
			case 2:
				del_node();
				break;
			case 3:
				display();
				break;
				case 4:
					exit(0);
					
			default:
				printf("invalid choice");
			}
	getch();
		}
	}
		
		


   
  

	





