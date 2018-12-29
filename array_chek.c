#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[3]={1,2,1};
	int *i,*j;
	i=&arr[2];
	j=(arr+1);
	if(i==j)
	printf("equal");
	else
	printf("not equal");
	getch();
	return 0;
}
