#include<stdio.h>
int main()
{
	int a[20],i,n,key;
	printf("enter the value for n:");
	scanf("%d",&n);
	printf("enter the elements of your choice:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the key element that you would like to be searched:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d the number is found at %d",key,i);
			break;
		}
	}
	if(i==n)
	{
		printf("%d the number is not found",key);
	}
	return 0;
}
