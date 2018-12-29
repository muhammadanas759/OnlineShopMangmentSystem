#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void pass_array(int *array[],int size)
{ int sum=0,i; 
for( i=0;i<size;i++)
  {
    int myarray=*array[i];
  sum+=myarray;
}
   printf("%d",sum);
}

void main() {
	int array={10,20,70};
	
	 pass_array(array,3);
	
	return 0;
	getch();
}
