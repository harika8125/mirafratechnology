#include<stdio.h>
#define N 3
int isfull();
int isempty();
void insert();
int delete();
void peek();
void display();
int queue[N];
int front=-1,rear=-1;
int main()
{
	int ch;
	do
	{
	printf("enter choice: 1.insert 2.delete 3.peek 4.display =");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insert();
		       break;
		case 2:delete();
		       break;
		case 3:peek();
		       break;
		case 4:display();
		       break;
	}
}while(ch!=0);
}

int isfull()
{
	if(rear==N-1)
		return 1;
	else
		return 0;
}

int isempty()
	{
		if(rear==front)
			return 1;
		else
			return 0;
	}
void insert(int n)
{
	printf("enter data\n");
	scanf("%d",&n);
	if(isfull()==1)
	{
		printf("queue is full\n");
		return;
	}
	else
		queue[++rear]=n;
}

int delete()
{
	if(isempty()==1)
	{
		printf("queue is empty\n");
		return -1;
	}
return queue[++front];
	
}

void peek()
{
	if(isempty()==1)
		printf("queue is empty\n");
	else
		printf("%d\n",queue[front+1]);
}

void display()
{
	int i;
	if(isempty()==1)
		printf("queue is empty\n");
	else
		for(i=front+1;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
}





