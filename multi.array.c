#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum_array(int array[],int size)
{ int sum=0;
  int i;
  for(i=0;i<size;i++)
  {
    sum+=array[i];
}
   return sum;
}
int main() {
	int array[9]={1,2,3,4,5,6,7,8,9};
	int a=sum_array(array,9);
	printf("sum is %d",a);
}
