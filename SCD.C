//write a program to find smallest comman division.
#include<stdio.h>
#include<conio.h>

 int main()
 {
    int SCD=1;
    int n1,n2,i;
    printf("enter number_1:");
    scanf("%d",&n1);

    printf("enter number_1:");
    scanf("%d",&n2);

    for(i=2;i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)

            SCD=i;
            break;
    }
    printf("SCD IS:%d",SCD);

    return 0;
 }
