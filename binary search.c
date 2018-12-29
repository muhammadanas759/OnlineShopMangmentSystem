#include<stdio.h>
int main(){

    int a[10],i,size,ent_no,c=0,end,start,mid;

    printf("Enter the size of an array: ");
    scanf("%d",&size);
for(i=0;i<size;i++){

    printf("Enter the elements in ascending order: ");
    
         scanf("%d",&a[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&ent_no);

    start=0,end=size-1;
    while(start<=end){
         mid=(start+end)/2;
         if(ent_no==a[mid]){
             c=1;
             break;
         }
         else if(ent_no<a[mid]){
             end=mid-1;
         }
         else
             start=mid+1;
    }
    if(c==0)
         printf("The number is not found.");
    else
         printf("The number is found.");

    return 0;
}
