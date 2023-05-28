#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter value for a and b\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("c=%d",c);
}
int sum(int a,int b)
{
	int c=(a+b);
	return c;
}

