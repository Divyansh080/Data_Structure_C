// 3. Create arrays A, B and C of size 3, perform C = A + B.
#include<stdio.h>
#include<conio.h>

void main()
{
 int a[3],b[3],c[3],i;

 printf("enter the value of A:");
 for(i=0;i<3;i++)
 {
     scanf("%d",&a[i]);
 }

  printf("enter the value of B:");
   for(i=0;i<3;i++)
   {
       scanf("%d",&b[i]);
   }

  printf("the sum of A+B=C \n");
  for (i=0;i<3;i++)
  {
      c[i]=a[i]+b[i];
      printf("%d \n",c[i]);
  }
}
