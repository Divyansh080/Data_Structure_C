//7. Delete an element from the array from user defined position. 8.
#include<stdio.h>
#include<conio.h>

void main(){

    int arr[10],i,pos;

    for(i=0;i<10;i++)
    {
        printf("enter the value:");
        scanf("%d",&arr[i]);
    }
    printf("enter position that you want to delete:");
    scanf("%d",&pos);

    for(i=pos;i<10;i++)
    {
        arr[i-1]=arr[i];
    }

    for(i=0;i<9;i++)
    {
        printf("\n value arr[%d]=%d",i,arr[i]);
    }
}
