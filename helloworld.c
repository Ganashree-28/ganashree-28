#include<stdio.h>
void main()
{
	int n;
	printf("enter the n value:\n");
	scanf("%d",&n);
    if(n%2==0 && n%3==0)
	{
		printf("hello world\n");
	}
	else if(n%2==0)
	{
		printf("hello\n");
	}
	else if(n%3==0)
	{
		printf("world\n");
	}
}
