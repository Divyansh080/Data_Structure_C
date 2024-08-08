#include<stdio.h>
#include<conio.h>

void main()
{
    int a=10,b=20;
    int *p1,*p2,*temp;
    p1=&a;
    p2=&b;

    printf("before swap\n");
    printf("value of a is %d \n",*p1);

    printf("value of b  is %d \n",*p2);

    temp=p1;
    p1=p2;
    p2=temp;

    printf("after swap \n");
    printf("value after swap %d \n",*p1);
    printf("value after swap %d \n",*p2);
}
