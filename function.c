#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
	
	int product(int b)
	{int x=8;
		int c=x*b;
		return(c);
	}
	int  main(void)
	{int y;
		printf("enter the number:");
		scanf("%d",&y);
		int pr;
		pr = product(y);
		printf("the product is %d",pr);
		
		getch();
	
	}



