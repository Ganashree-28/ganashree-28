#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1,a[SIZE];
void push();
void pop();
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("\nperform operation on stack:\n");
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("\nenter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("invalid choice\n");
		}
	}
}
void push()
{
	int x;
	if(top==SIZE-1)
	{
		printf("overflow\n");
	}
	else
	{
		printf("enter the element to be inserted:\n");
		scanf("%d",&x);
		top=top+1;
		a[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("underflow\n");
	}
	else
	{
		printf("popped element:%d",a[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("underflow\n");
	}
	else
	{
		printf("\nelements present in stack:\n");
		for(i=top;i>=0;i--)
		printf("%d\n",a[i]);
	}
}
