#include<stdio.h>
#include<conio.h>

void main(){
int arr[8],i,j,temp;

printf("enter the value of array");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
 for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
}
