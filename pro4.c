//create array a,b, of size 3 and marge a&b in c//

#include<stdio.h>
#include<conio.h>

void main()
{
    int A[3],B[3],C[3];
    int i=0;
    printf("enter the value of A:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("enter the value of B:");
    for (i=0;i<3;i++)
    {
        scanf("%d",&B[i]);
    }
//
    for(i=0;i<3;i++)
    {
        C[i]=A[i];
    }

    for(i=0;i<3;i++)
    {
        C[i+3]=B[i];
    }

    printf("marge array C:\n");
        for(i=0;i<6;i++)
    {
        printf("%d",C[i]);
    }
}
