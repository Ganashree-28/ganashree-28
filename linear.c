#include<stdio.h>
int main()
{
	int i,a[20],key,n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("numbers are:\n",i);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the value of key\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	{
		printf("%d the number is found",key);
		break;
    }
	}
	if(i==n)
	printf("%d the number is not found",key);
	return 0;
}
