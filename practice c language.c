#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*int main (void)

{ int run=1;
	struct studentinfo
	{
	char name[50];
	int age;
	float height;	
	} std;
    
	
	FILE *fp;
	fp=fopen("stdinfo.txt","w");
	if(fp==NULL)
	{
		printf("cannot open the file");
		return 0;
	}
	
	
	
	
	while(run)
	{
	printf("Enter name of Student\n");
	scanf("%s",std.name);
	printf("Enter age of Student\n");
	scanf("%d",&std.age);
	printf("Enter height of Student\n");
	scanf("%f",&std.height);	


	fprintf(fp,"Name\tage\theight\n",std.name,std.age,std.height);
		fprintf(fp,"%s\t%d\t%f\n\n",std.name,std.age,std.height);

	
	

	
	printf("To continue press \"1\" otherwise press \"0\"\n");
    scanf("%d",&run);
	}
	fclose(fp);
	return 0;
	

}*/

/*
struct node{
	int value;
	struct node *link;
};
void append(struct node **root,int data);
void display(struct node *root );
void main()
{
	struct node *root;
	root=NULL;
	append(&root,10);
	append(&root,14);
	append(&root,16);
	append(&root,17);
	display(root);
	getch();
	
}
	void append(struct node **root,int data)
	{
		struct node *temp;
		if(*root==NULL)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			*root=temp;
			
		}
		else {
		
		temp=*root;
		while (temp->link!=NULL)
			temp=temp->link;
		temp->link=(struct node*)malloc(sizeof(struct node));
		temp=temp->link;
		}
		temp->value=data;
		temp->link=NULL;
		
	}
	void display(struct node *root )
	{
	struct node*temp;
		if(root==NULL)
		{
			printf("link list is empty");
			return;
		}
		else
		{ temp=root;
		while(temp!=NULL)
		{
		printf("%d ",temp->value);
		temp=temp->link;
		
		}
	}
	}
	
#include<conio.h>

struct node
{
	int value;
	struct node *link;
	
};
void Append(struct node **root,int val);
void Display(struct node *root);


int main(void)
{
struct node *root;
root= NULL;
int num=10;
Append(&root,num\n);
Append(&root,45);
Display(root);
}
void Append(struct node **root,int val)
{
   struct node *temp;
   if( *root == NULL)
   {
   	temp=(struct node*)malloc(sizeof(struct node));
   	*root=temp;
   }
   else
   {
   	temp= *root;
   	
   	while(temp->link!=NULL)
   	{  
   	temp= temp->link;
   	}
	   temp->link=(struct node*) malloc(sizeof(struct node));
       temp= temp->link;
   }
   
       temp->value=val;
       temp->link=NULL;
   }
   void Display(struct node *root)
   {
   	struct node *temp;
   	if (root==NULL)
   	{
   		printf("Linked List Is Empty");
   		
   		
	   }
	   
	   else
	   {
	   	temp=root;
	   	while (temp !=NULL)
	   	{
	   	printf("%d",temp->value);
	   	temp=temp->link;
		   }
	   }
   }
  

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

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
	int min(int a[],int k,int n)
	{
		int mini,loc,i;
		mini=a[k];
		loc=k;
		for(i=k+1;i<=n-1;i++)
		{
			if(mini>a[i])
			{
			mini=a[i];
			loc=i;
		}
		}
		return(loc);
	}
	
	
	int main()
	{
	
	
	int a[]={42,32,34,35,3,24,53,37};

		int k,temp,loc;
	for(k=0;k<=7;k++)	
{     loc=min(a,k,8);

         
		  temp=a[k];
			a[k]=a[loc];
			a[loc]=temp;
			
		}
	for(k=0;k<=7;k++)
	printf("\n%d",a[k]);
	getch();
	}
	
	
	
	 

	struct studentinfo
	{
	char name[50];

	int age;
	float height;	
	} std;


	
	




int main (void)

{ int run=1;
int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(3);
	delay(1000);
	setcolor(1);
	setfillstyle(SOLID_FILL,15);

    
	
	FILE *fp;
	fp=fopen("stdinfo.txt","w");
	if(fp==NULL)
	{
		printf("cannot open the file");
		return 0;
	}
	
	
	
	
	while(run)
	{
	printf("Enter name of Student\n");
	scanf("%s",std.name);
	printf("Enter age of Student\n");
	scanf("%d",&std.age);
	printf("Enter height of Student\n");
	scanf("%f",&std.height);	

fprintf(fp,"name:\tAge:\theight:\t\n");
	fprintf(fp,"%s\t%d\t%f\n\n",std.name,std.age,std.height);

	
	printf("To continue press \"1\" otherwise press \"0\"\n");
    scanf("%d",&run);
	}
	fclose(fp);
	closegraph();
	return 0;
	
}*/
int main(){
	
	char arr1[15][15]={"java","c#","c++","ruby","python","ada","swift","R","scala","javascript","html","css"};
	
	printf("%s",arr1[0][2]);
	
	
}

	
	
	
		
		


   
  

	





