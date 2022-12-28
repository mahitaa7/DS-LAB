#include<stdio.h>
void main()
{
	int i,j,n,temp,arr[20];
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n-i-1;j++);
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}


