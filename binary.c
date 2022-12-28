#include<stdio.h>
void main()
{
	int i,n,low,high,mid,key,arr[20];
	printf("enter the size of array: \n");
	scanf("%d",&n);
	printf("enter the elements of array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be found:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+mid)/2;
	while(high >= low)
	{
		 if(arr[mid]==key)
		{
			printf("element found at %d position",mid+1);
		}
		 else if(arr[mid]<key)

		else
		{
			high=mid-1;
		}
	}
}
