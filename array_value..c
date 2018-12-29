#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
{
	printf("value of %d = %d\n",i,arr[i]);
	printf("address of %d = %d\n",i,&arr[i]);
	printf("value of %d=%d\n",i,*(arr+i));
	
}

getch();	
	return 0;
}
