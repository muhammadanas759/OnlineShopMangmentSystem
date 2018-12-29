#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	int N=3;
	
	 int a={1,2,3};
	printf("enter the number:");
	scanf("%d",&n);
	
	for( i=0;i<N;i++)
	{
	if(n==a[i])
	{
	char f='n';
	printf("found");
}


	else
	printf("not found");
}
	getch();
}
