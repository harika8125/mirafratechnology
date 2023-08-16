#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		int data;
		struct node*next;
	};

	struct node *head,*newnode,*temp;
	int choice=1,count=0;
	head=0;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data\n");
		scanf("%d",&newnode->data);
		newnode->next=0;


		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}


		printf("if u want to continue(0,1)?");
		scanf("%d",&choice);
	}

	temp=head;    //traversing (printing values from 1st node to null)
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
		count++;
	}
	printf("count=%d\n",count);
}

