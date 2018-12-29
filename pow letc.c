#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b;
	printf("Enter the base:");
	scanf("%d",&a);
	printf("Enter the power:");
	scanf("%d",&b);
	int power=pow(a,b);
	printf("answer is %d",power);
	getch();
	return 0;
	
}

