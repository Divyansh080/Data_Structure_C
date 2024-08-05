// wap a program to find GCD(greatest comman division) for given two number.
/*


 st1 enter the values
 st1 GCD=1;
 ST3 loop i=2;i<=n1 && i<=n2;i==;
 st4 IF (n1%i==0 && n2%i==0)
            GCD=i;
 st5 print gcd;
*/

//write a program to find greatest comman division.
#include<stdio.h>
#include<conio.h>

 int main()
 {
    int GCD=1;
    int n1,n2,i;
    printf("enter number_1:");
    scanf("%d",&n1);

    printf("enter number_1:");
    scanf("%d",&n2);

    for(i=2;i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)

            GCD=i;
    }
    printf("GCD IS:%d",GCD);

    return 0;
 }
