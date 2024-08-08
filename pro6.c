//6. Insert an element into the array at user defined position.
#include<stdio.h>
#include<conio.h>

void main(){

    int arr[10],i,pos;

    for(i=0;i<10;i++)
    {
        printf("enter position:");
        scanf("%d",&pos);
        printf("enter the value:");
        scanf("%d",&arr[pos-1]);
    }
    for(i=0;i<10;i++)
    {
        printf("\n value a[%d]=%d",i,arr[i]);
    }

}
