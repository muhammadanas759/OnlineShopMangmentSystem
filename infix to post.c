   
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
/*FILE *p;
char ch[10];
int j;
p=fopen("manas.txt","r");
fseek(p,7,SEEK_END);
j=ftell(p);
printf("%d\n",j);
{	
printf("%c",fgets(ch,10,p));
}
fclose(p);


|||||||||||||||||||||||||||||||||||||||||||||||||
int top=-1;
int array[10];
main()
{

int i,a,b;
for(i=0;i<10;i++)
{
printf("enter the number:");
scanf("%d",&a);
 b=push(a);

}
printf("%d\n",b);
getch();
}
int push(int a)
{
	top=+1;
	if(top==10)
	printf("stack is full");
	else
	{
	
	array[top]=a;
	return(a);
}

}
//////////////////////////////

main()     FACTORIAL
{

int no,f;
printf("enter the number:");
scanf("%d",&no);
f=fac(no);
printf("ans is %d",f);
getch();
}
int fac(int f){
	int no;
	if(f==1)
	return(f);
	else{
		no=f*fac(f-1);
		return(no);
		
	}
}
int main()    FIBANOCCI SERIES
{

int a=1,f=0,r;

fib(5);
}

void fib(int i)
{
	printf("%d\t",a);
	int r=f+a;
	f=a;
	a=r;
}

struct book{
	char name[10];
	int id;
	
};
void main(){
	int ch;
	printf("enter 0 to create:\n");
	printf("enter 1 to display:\n");
	printf("enter your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 0:create();
		break;
		
		case 1:display();
		break;
		
		default:
			printf("\nplz enter correct choice");
			
	}
	getch();
	
}
int create(){
struct book shop;
int run=1;
FILE *fp;
fp=fopen("book.txt","w");
fprintf(fp,"name\t id\n");
		while(run)
		{
		
	printf("enter the name of book:\n");
	scanf("%s",shop.name);
	printf("enter the ID of book:\n");
	scanf("%d",&shop.id);
	
	fprintf(fp,"%s\t%d\n",shop.name,shop.id);

printf("enter 1 to continue 0 for closing\n");
scanf("%d",&run);
}
fclose(fp);
return 0;
}

int display()
{


struct book shop;
	FILE *fp;
	
	fp=fopen("book.txt","r");
	while(fscanf(fp,"name is=%s\tid is=%d",shop.name,shop.id)!=EOF)
	{printf("name is=%s\t",shop.name);
	printf("ID is=%d",shop.id);
	}

	fclose(fp);
	return 0;

}

struct node                   LINK LIST

{
	int value;
	struct node *link;
};

void Append (struct node **root, int data);
void Display (struct node *root);

int main(void) 
{
	struct node *root;
	int a, b, flag = 0;
	root == NULL;
	
	
	
	while (1)
	{
		printf("0 = Append\n1 = Display\n2 = EXIT\n\n");
		scanf("%d", &a);
		switch(a)
		{
			case 0:
				printf ("give number\n");
				scanf("%d", &b);
				Append(&root, b);
				break;
			case 1:
				Display (root);
				break;
			case 2:
				return;
			
				
		}
	}
	return 0;
}

void Append (struct node **root, int data)
{
	struct node *temp;
	
	if (*root == NULL)
	{
		temp = malloc(sizeof(struct node));
		*root = temp;
	}
	else
	{
		temp = *root;
		while (temp -> link != NULL)
		{
			temp = temp -> link;
		}
		
		temp -> link = malloc(sizeof(struct node));
		temp = temp -> link;
	}
	
	temp -> value = data;
	temp -> link = NULL;
		
	}

void Display (struct node *root)
{
	struct node *temp;
	
	if (root == NULL)
	{
		printf("linked list is empty");
		return;
	}
	else
	{
		temp = root;
		
		while (temp != NULL)
		{
			printf("%d\N", temp -> value);
			temp = temp -> link;
		}
	}
}*/





#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int prec(char ch);
void push(char ch);
char pop();
char s[50];
int top=-1;

void push( char ch)
{
	 s[++top]=ch;
}
char pop()
{
	return s[top--];
}
int prec(char ch)
{
	switch(ch)
	{
		case'#':
		return 0;
		break;
		
		case'(':
	
		return 1;
		break;
		
		case'+':
		case'-':
		return 2;
		break;
		
		case'*':
		case'/':
		return 3;
		break;
	}
	
}
 void  main()
 {
 	int i=0,k=0; 
	 char ch,ch1;
	 char infix[50],postfix[50];
	 printf("enter infix expression");
	 scanf("%s",infix);
	 push('#');
	 while((ch=infix[i++])!='\0')
	 {
	 	if(isalphnum(ch))
	 	{
	 		postfix[k++]=ch;
	 		
		 }
		 else if(ch=='(')
		 push(ch);
		 else if(ch==')')
		 {
		 	while(s[top]!='(')
		 	{postfix[k++]=pop();
		 	 }
		 	 ch1=pop();
		 }
		 else{
		 	while(prec(s[top])>=prec(ch))
		 	{
			 postfix[k++]=pop(); }
		 	push(ch);
		 }
	 }
 while(s[top]!='#')
 {
 	postfix[k++]=pop();
 	ch1=pop();
 }

printf("%s",postfix[50]);

getch();

}
int main()
{char c;
	FILE *fp;
	fp=fopen("ubit.txt","w");
	fprintf(fp,"a");
	c=(char)getc(fp);
	fclose(fp);
	if(c=="a")
	printf("ok");
	else{
	
	printf("awwwww");
}
}


void main()
{
    FILE *fp;
    char ch;
    int size = 0;
 
    fp = fopen("book.txt", "r");
    if (fp == NULL)
    {
        printf("\nFile unable to open ");
    }
    else
    { 
        printf("\nFile opened ");
    }
    fseek(fp, 0, 2);     file pointer at the end of file 
    size = ftell(fp);    take a position of file pointer un size variable 
    printf("The size of given file is : %d\n", size);    
    fclose(fp);
}*/
int main()
{char ch;
	FILE *fp;
	fp=fopen("ubit.txt","r");
	
	ch=gets(fp);
	if(ch=='a')
	printf("present");
	else
	printf("not");
	fclose(fp);
}
