#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the value for a & b:");
	scanf("%d%d",&a,&b);
	{
		temp=a;
		a=b;
		b=temp;
		printf("the vaue for a & b is %d %d",a,b);
	}
}
