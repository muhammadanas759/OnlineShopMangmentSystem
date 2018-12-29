#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{

 int multi_array[3][3]={
 {1,2,3},
 {3,4,5},
 {6,7,8} 
 };//initializing the multidimentional array
int i,j;
 for( i=0;i<3;i++)
 {
 for( j=0;j<3;j++)
   printf("the array is [%d][%d]=[%d]\n",i,j,multi_array[i][j]); 
 }
 getch();
}
