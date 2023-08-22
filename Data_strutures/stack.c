#include<stdio.h>
void push();
void pop();
void peek();
void display();
#define N 5
int stack[N];
int top = -1;
int main()
{
	int ch;
	do
	{
		printf("enter choice 1.push 2.pop 3.peek 4.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:peek();
			       break;
			case 4:display();
			       break;
			default :printf("invalid choice");
		}
	
	}while(ch!=0);
	getchar();
}


void push()
{
	int x;
	printf("enter data\n");
	scanf("%d",&x);
	if(top==N-1)
		printf("stack is full\n");
	else
	{
		top++;
		stack[top]=x;
	}
}


void pop()
{
	int item;
	if(top==-1)
		printf("stack is empty\n");
	else
	{
		item=stack[top];
		top--;
		printf("%d",item);
	}
}

void peek()
{
	if(top==-1)
		printf("stack is empty\n");
	else
		printf("%d\n",stack[top]);
}

void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d",stack[i]);
	}
}



