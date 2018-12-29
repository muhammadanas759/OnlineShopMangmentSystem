#include <stdio.h>
#include <stdlib.h>
/*int fib(int n);
/*int rsum(int no);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int no,add;//  add of number by recursive function
	printf("enter the number:");
	scanf("%d",&no);
	add=rsum(no);
	printf("sum is %d",add);
	return 0;
	getch();
}
int rsum(int no)
{
	int rem,sum=0;
	if(no!=0)
{
		rem=no%10;
	sum=rem+rsum(no/10);
}
	return(sum);

int i;//number which is equal to cubic sum of a given number 
  for(i=1; i<=500; i++)
            {
                int temp=i;
                int r,sum=0;

                while (temp > 0)
                {
                    r = temp % 10;
                    sum = sum + (r * r * r);
                    temp = temp / 10;
                }
                    if (sum == i)
                    printf("%d\n",i);
                    
			}
			*/
			
			
			
				
		/*	
          int no=10,i=0;//fibonacci series without recursive;
          int a=0,b=1;
          while(i<10)
         {
         	i=a+b;
         	printf("%d\n",i);
         	b=a;
         	a=i;
         }
         	return 0;
         	getch();
    */
    
	      /*int no,c,i=0;//fibonacci series with recursive function;

		  printf("enter the limit");
		  scanf("%d",&no);
		  
		  for(c=0;c<no;c++)
		  {
		  printf("%d\n",fib(i));
		  i++;
	}
		getch();
		return 0;
		
	}
	int fib(int n)
	{ if(n==0)
	return 0;
	else if(n==1)
	return 1;
	 else 
	return(fib(n-1)+fib(n-2));}

int no=24;//find multiple factors
int i=2;
while(i<=no)
{

if(no%i==0)

printf("%d\n",i);
i++;


}*/



}

 
