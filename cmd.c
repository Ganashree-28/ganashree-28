#include<stdio.h>
#include<stdlib.h>
void main(int args,char *argv[])
{
	int i,a,b;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	if(a>b)
	{
		printf("a is largest\n");
	}
	else
		printf("b is largest\n");
}
