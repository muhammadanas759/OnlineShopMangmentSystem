#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=2,j=3,m,a;
	a=addmult(i,j);
	m=addmult(i,j);
	printf("%d\n%d",a,m);
	return 0;
}
int addmult(int ii,int jj)
{
	int aa,mm;
	aa=ii+jj;
	mm=ii*jj;
	return(aa,mm);


