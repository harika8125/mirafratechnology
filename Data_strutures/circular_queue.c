#include<stdio.h>
#define N 4 
void insert();
void delete();
void peek();
void display();
int queue[N];
int rear=-1;
int front=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("enter choice: 1.insert 2.delete 3.peek 4.display: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
				break;
			case 2: delete();
				break;
			case 3: peek();
				break;
			case 4: display();
				break;
			default: printf("invalid choice\n");
		}
	}
}



void insert(int n)
{

	printf("enter elements\n");
	scanf("%d",&n);
	
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			queue[rear]=n;
		}
		else 
			if((rear+1)%N==front)
			{
				printf("queue is full\n");
			}

			else
			{
				rear=(rear+1)%N;
				queue[rear]=n;
			}
}

	void delete()
	{

		if(front==-1 && rear==-1)
		{
			printf("queue is empty\n");
		}
		else
			if(front==rear)
			{
				front=rear=-1;
			}
			else
			{

				front=(front+1)%N;
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
		int i=front;
		if(front==-1 && rear==-1)
		{
			printf("queue is empty\n");
		}
		else
		{
			while(i!=rear)
			{
				printf("%d\n",queue[i]);
			i=(i+1)%N;
			}
		
		printf("%d\n",queue[rear]);
		}
	}

