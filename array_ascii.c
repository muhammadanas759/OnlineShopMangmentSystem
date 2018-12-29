#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[25],i;
	for(i=0;i<25;i++)
{
		arr[i]='A'+i;
	printf(" %d = %c\n",arr[i],arr[i]);
}
	
	return 0;
}

