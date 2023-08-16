#include<stdio.h>
#include<stdlib.h>
struct node *insert_at_begining(struct node *head,struct node *newnode,struct node *temp);
struct node *insert_at_end(struct node *head,struct node *newnode,struct node *temp);
struct node *insert_at_midd(struct node *newnode,struct node *head,struct node *temp);
void display(struct node *temp,struct node *head);
struct node
{
	int data;
	struct node *next;
};

struct node *createnode(void)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	return newnode;
}

int main()
{
	struct node *head,*newnode,*temp;
	int choice=1,count=0,x,p;
	head=0;
	while(choice)
	{
		newnode=createnode();

		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}

		printf("do u want to continue(0,1)?:");
		scanf("%d",&choice);
	}

	while(1)
	{
		printf("1)insert at beginning\n 2)insert at end\n 3)insert at middle\n 4)display\n 5)exit\n");
		printf("choose option:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:head=insert_at_begining(head,newnode,temp);
			       break;
			case 2:insert_at_end(head,newnode,temp);
			       break;
			case 3:insert_at_midd(newnode,head,temp);
			       break;
			case 4:display(temp,head);
			       break;
			case 5:exit(1);
		}
	}
}
void display(struct node *temp,struct node *head)
{
	int count=0;
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\n");
	printf("count=%d\n",count);
}


struct node *insert_at_begining(struct node *head,struct node *newnode,struct node *temp)
{

	newnode=createnode();
	newnode->next=head;
	head=newnode;
	return head;
}

struct node *insert_at_end(struct node *head,struct node *newnode,struct node *temp)
{
	newnode=createnode();
	newnode->next=0;
	temp=head;

	while(temp->next!=0)
	{
		temp=temp->next;
	}	
	temp->next=newnode;

}

struct node *insert_at_midd(struct node *newnode,struct node *head,struct node *temp)
{
	int pos,data,i=1,count;
	printf("enter the position\n");
	scanf("%d",&pos);
	if(pos>count)
	{
		printf("invalid position\n");
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		newnode=createnode();
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
