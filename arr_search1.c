/*1. Create an array of size 10, input values and print the array, and
     search an element in the array. */

#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],i,key,ans=0;

    printf("enter the value:");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }

    printf("entered value is:");
    for(i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
        printf("\n");
    }

    printf("enter value that want find:");
    scanf("%d",&key);

    for(i=0;i<10;i++)
    {
        if(a[i]==key){
            ans=1;
            break;
        }
    }
     if(ans=1)
     {
         printf("value found at position %d",i+1);
     }
     else
     {
        printf("value not found");
     }

}
