//enter the 10 value & find largest value//

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,max=0;

 printf("enter the value of array A:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max>=a[i])
        {
        printf("%d",max);
        }
    }

}
