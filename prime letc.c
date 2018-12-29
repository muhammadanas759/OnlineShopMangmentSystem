#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
 	
	int no,i;
	
	printf("Enter number :");
	scanf("%d\n",&no);
	prime(no);
	
	
	printf("enter for exit");
	getch();
}
 void prime(int n)
{
	int i=2;
	printf("prime factor of%d are:",n);
	while(n!=1)
	{
		if(n%i==0)
		printf("%d",i);
		else
		{i++;
		continue;
		}
		n=n/i;
	}  
	/*
	int n=24,j=2; //prime factors of  number;
	int i=2;
	
	while(i<=24)
	if(n%i==0)
{
		while(j<=i+1)
		{
		
	if(i%j!=0)
	printf("PRIME");
	j++;
}
	printf("%d\n",i);
	i++;
}
	

	
	getch();*/
	
}
	
	

