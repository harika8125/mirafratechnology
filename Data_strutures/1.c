#include<stdio.h>
#include<stdlib.h>
#define size 4
int stack[size];
int top =-1;
int isempty();
int isfull();
void push();
int pop();
void peek();
int display();
int main()
{
	int ch,n;
	while(1)
	{
		printf("enter choice: 1.push 2.pop 3.peek 4.display");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;

			case 2: pop();
				break;

			case 3: peek();
				break;

			case 4: display();
				break;

			default : printf("entered invalid choice\n");
		}
	}

}

int isempty(void)
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int isfull(void)
{
	if(top==size-1)
		return 1;
	else
		return 0;
}

void push(int n)
{
	printf("enter elements\n");
	scanf("%d",&n);
	if(isfull()==1)
	{
		printf("stack if full\n");
		return;
	}
	stack[++top]=n;
}

int pop(void)
{ int n;
	if(isempty()== 1)
	{
		printf("stack is empty\n");
		return -1;
	}
	return stack[top--];
}

void peek()
{
	if(top==-1)
		printf("stack is empty\n");
	else
		printf("%d\n",stack[top]);
}


int display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d",stack[i]);

	}
}


