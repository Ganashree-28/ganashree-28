#include<stdio.h>
#include<conio.h>
#include<process.h>
#define stack_size 5
void push(int item,int *top,int s[])
{
	if(*top==stack_size-1)
	{
		printf("stack overflow\n");
	}
	*top=*top+1;
	s[*top]=item;
}
void display(int *top,int s[])
{
	int i;
	for(i=*top;i>=0;i--)
	{
		printf("stack[%d]=%d",i,s[i]);
	}
}
int pop(int *top,int s[])
{
	int deleted_item;
	if(*top==-1)
	{
		printf("stack underflow\n");
		return 0;
	}
	*top=s[*top];
	*top=*top-1;
	return deleted_item;
}
void main()
{
	int s[10],top;
	int item,deleted_item,choice;
	top=-1;
	for(;;)
	{
		printf("\n1:PUSH\n 2:POP\n 3:DISPLAY\n 4:EXIT\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the item to be inserted\n");
			       scanf("%d",&item);
			       push(item,&top,s);
			       break;
			case 2:deleted_item=pop(&top,s);
			       printf("item deleted:%d",deleted_item);
			       break;
			case 3:display(&top,s);
			       break;
			default:exit(0);
		}//end of switch
	}//end of for or while
}
