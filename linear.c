#include<stdio.h>
void main()
{
	int arr[20],count=0,i,n,key;
	printf("enter the size of array: \n");
	scanf("%d",&n);
	printf("enter the elments of array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to be searched: \n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		printf("element found at %d position",i+1);
	}
	else
	{
		printf("element not found");
	}
}
