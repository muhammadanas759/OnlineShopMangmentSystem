//#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

#include<stdio.h>
	 
struct snode{              // Linked stack used to convert an inorder
	    char sym;              // exp<b></b>ression to postorder
	  struct  snode *next;
	    }*top=NULL;

	 

struct tree{              // exp<b></b>ression tree

	    char info;
	    struct tree *left;

	    struct tree *right;

	    }*root;

	 

	struct pnode{            // Linked stack to convert a postorder

	   struct tree *psym;           // exp<b></b>ression to a tree

	  struct pnode *next;

	   }*ptop;

	 
	void push(char ch){           //for snode: push a char into stack

	    struct snode *p=(struct snode*)malloc(sizeof(struct snode));

	    p->sym=ch;

	    p->next=top;

	    top=p;

	    }

	 

	void ppush(struct tree *ptr){        //for pnode: push a node(tree) into stack

	   struct pnode *pp=(struct pnode*)malloc(sizeof(struct pnode));

	    pp->psym=ptr;

	    pp->next=ptop;

	    ptop=pp;

	    }

	 

char pop(){                             //for snode: remove a char from stack

	    if(top==NULL){                      // and return it

	        printf("Stack is empty!\n");

	    return '\0';
	        }

	    else{

	         struct snode *help=top;

	         top=top->next;

	         char ch=help->sym;

	         free(help);

	         return(ch);

	         }

	    }

	 

	struct tree *ppop(){                            //for pnode: remove a node (tree) from

	    if(ptop==NULL){                      // a stack and return it

	        printf("Stack is  empty!\n");

	        return NULL;

	        }

	    else{

	       struct pnode *help=ptop;

	        ptop=ptop->next;

	        struct tree *ptr=help->psym;

	        free (help);

	        return ptr;

	        }

	    }

	 

	char *convert(char s[]){            //convert inorder to postorder7
	    int j=0;

	  printf(" the infix is : %s\n",s);
	    char *postfix;
postfix = (char* )malloc(sizeof(char)*sizeof(s)*2);
/*while(){postfix[j++]=pop();
	    printf("%c",postfix[j++]);
		}/**/

//printf("%c",&postfix);
	   // postfix=new char[strlen(s)];
int i;
	    for( i=0;s[i]!='\0';i++){

	        if(s[i]=='*' || s[i]=='/' || s[i]=='(') push(s[i]);

	        else if(s[i]=='+' || s[i]=='-'){

	            if(top!=NULL){

	                if( top->sym=='*' || top->sym=='/' ){

	                    postfix[j++]=pop();
	                   // printf("%s\n",postfix);
	                    

	                    push(s[i]);

	                    }

	                else push(s[i]);

	            }

	            else push(s[i]);

	            }

	        else if(s[i]==')'){

	            while(top->sym!='(') postfix[j++]=pop();

	            pop();

	            }

	        else postfix[j++]=s[i];
	      //  printf("%s/n",postfix);

	        }

	    while(top!=NULL){postfix[j++]=pop();
	   // printf("%c",postfix[j]);
		}

	    postfix[j]='\0';

	    return postfix;

	    }

	 

	 

	int test(char c){

	    return(c=='+' || c=='-' || c=='*' || c=='/');

	    }

	 

	 

	void plant(char *p){                 //construct the expression tree

	    ptop=NULL;                       //from a postorder expression
//post order ka top 
	    struct tree *temp;
int i;
	    for(i=0;p[i]!='\0';i++){

	        if(test(p[i])==0){

	            temp=(struct tree*)malloc(sizeof(struct tree));
	            temp->info=p[i];

	            temp->left=temp->right=NULL;

	            ppush(temp);

	            }

	        else{

	            temp=(struct tree*)malloc(sizeof(struct tree));

	            temp->info=p[i];

	            temp->right=ppop();

	            temp->left=ppop();

	            ppush(temp);

	            }

	        }

	    root=ppop();

	    }

	 

	void inorder(struct tree *root){      //print an expression tree

	    if(root!=NULL){

	        if(root->right!=NULL || root->left!=NULL) printf("(");

	       

	      
 inorder(root->left); 
	       
	         printf("%c",root->info);
 inorder(root->right);
	        if(root->right!=NULL || root->left!=NULL) printf(")");

	        }

	    }

	 

	 

struct	tree *copy(struct tree *root){       //copy a tree

	 struct   tree *new_root;

	    if(root!=NULL){

	        new_root=(struct tree*)malloc(sizeof(struct tree));

	        new_root->info=root->info;

	        new_root->left=copy(root->left);

	        new_root->right=copy(root->right);

	        }

	    else if(root==NULL) return NULL;

	    return new_root;

	    }

	 

	 

struct tree *diff(struct tree *root){

	    if(root->info=='+' || root->info=='-'){

	        root->left=diff(root->left);

	        root->right=diff(root->right);

	        }

	    else if(root->info=='x') root->info='1';

	    else if((root->info)>='0' && (root->info)<='9') root->info='0';

	    else if(root->info=='*'){

	       struct tree *temp1=(struct tree*)malloc(sizeof(struct tree));

	     

	        temp1->left=root->left;

	        temp1->right=diff(copy(root->right));
 temp1->info='*';
 
 
  struct  tree *temp2=(struct tree*)malloc(sizeof(struct tree));
	        temp2->left=diff(copy(root->left));

	        temp2->right=root->right;

	       

	        temp2->info='*';

	        root->left=temp1;

	        root->right=temp2;

	        root->info='+';

	        }

	    else if(root->info=='/'){

	        struct tree *temp1=(struct tree*)malloc(sizeof(struct tree));

	       struct tree *temp2=(struct tree*)malloc(sizeof(struct tree));

	     struct   tree *temp3=(struct tree*)malloc(sizeof(struct tree));

	       struct tree *temp4=(struct tree*)malloc(sizeof(struct tree));

	        temp1->left=diff(copy(root->left));

	        temp1->right=root->right;
	        temp1->info='*';

	        temp2->left=root->left;

	        temp2->right=diff(copy(root->right));

	        temp2->info='*';

	        temp3->left=temp1;

	        temp3->right=temp2;

	        temp3->info='-';

	        temp4->left=root->right;

	        temp4->right=root->right;

	        temp4->info='*';

	        root->left=temp3;

	        root->right=temp4;

	        }

	 

	    return root;

	    }

	 

	 int evaluation(struct tree* myRoot,int x){
	 	
	 	
	 	top =NULL;
	 	
	 	
	 
	 
	 
	 
	 }

	int main(){

	    char s[30];

	    struct tree *diff_root;

	    printf(" Enter a polynomial containing the variable x\n");

	    scanf("%s",&s);   //user enters an expression inorder
//printf("%s\n", s);
	     printf("---------------------------------orignal tree --------------------------------------------\n");

	    char *p=convert(s); //Before constructing the tree, convert the string into postorder
printf("the postorderis : \n %s \n",p);
	    plant(p);   //build up the tree

	    inorder(root);  //print the expression

	    printf("\n-------------------------- tree after differenciate ----------------------------------\n");

	    diff_root=copy(root);

	    diff_root=diff(diff_root);

	    inorder(diff_root);  //print the diffrentiation of expression

	    return 0;

	    }
