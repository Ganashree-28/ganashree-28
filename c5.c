#include<stdio.h>
int g=100;
int sum(int a,int b)
{
	int c;
	c=a+b+g;
	return c;
}
int main()
{
	int x,y,res;
	printf("enter the values:");
	scanf("%d %d",&x,&y);
	res=sum(x,y);
	printf("the sum is %d",res);
	return 0;
}
