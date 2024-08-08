#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],i,sum;
    float avg;

    printf("enter the value:");
    for(i=0;i<10;i++){
        scanf("%d ",&a[i]);
        sum=a[i]+sum;
    }
    for(i=0;i<10;i++)
    {
        avg=sum/10;
    }
    printf("sum is:%d",&sum);
    printf("average is:%f",&avg);
}
