#include<stdio.h>
void main()
{
	int i,j,n,count;
	printf("enter the value for n:");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		count=0;
		for(i=2;i<=j/2;i++)
		{
			if(j%i==0)
			{
				count++;
				break;
			}
		}
		if(count==0 && j!=1)
		{
			printf("%d",j);
		}
	}
}
