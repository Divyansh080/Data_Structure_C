// pro 6//

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
    arr[pos-1]=0;

    for(i=0;i<10;i++)
    {
        printf("\n value arr[%d]=%d",i,arr[i]);
    }
}
