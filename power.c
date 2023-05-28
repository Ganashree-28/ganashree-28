#include<stdio.h>
int main()
{
	int i,a,b,c=1;
	printf("enter the a&b value:",a,b);
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		c*=a;
	}	
    printf("c=%d\n",c);
    return 0;
}
