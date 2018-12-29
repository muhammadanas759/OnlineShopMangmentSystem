#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node 
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
}
	



