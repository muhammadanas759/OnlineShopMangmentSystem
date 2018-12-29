#include <stdio.h>
#include <stdlib.h>


int main()
 int i=0;
{ while(i<10)
{

   char s[100], r[100];
   int n, c, d;
 
   printf("Input a string\n");
   gets(s);
 
   n = strlen(s);
 
   for (c = n - 1, d = 0; c >= 0; c--, d++)
      r[d] = s[c];
 
   r[d] = '\0';
 
   printf("%s\n", r);
 
   return 0;
   i++;
}
}
