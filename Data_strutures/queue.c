#include<stdio.h>
#define N 3
void enqueue();
void dequeue();
void peek();
void display();
int queue[N];
int front=-1;
int rear=-1;
int main()
{
	int ch;
	do
	{
		printf("enter choice: 1.enqueue 2.dequeue 3.peek 4.display  =");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: peek();
				break;
			case 4: display();
				break;
		}
	}while(ch!=0);
	getchar();
}

void enqueue()
{
	int x;
	printf("enter data\n");
	scanf("%d",&x);
	if(rear==N-1)
		printf("queue is full\n");
	else
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			queue[rear]=x;
		}
		else
		{
			rear++;
			queue[rear]=x;
		}
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
		printf("queue is empty\n");
	else 
	{
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			printf("dequed element is %d\n",queue[front]);
		front++;

		}
	}
}

void peek()
{
	if(front==-1 && rear==-1)
		printf("queue is empty\n");
	else
		printf("%d\n",queue[front]);
}

void display()
{
	int i;
	if(front==-1 && rear==-1)
		printf("queue is empty\n");
	else
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
}

