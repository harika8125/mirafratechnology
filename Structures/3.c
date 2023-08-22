#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};

int main()
{
	int i;
	struct student s[3];
	for(i=0;i<3;i++)
	{
		scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
	}
	for(i=0;i<3;i++)
	{
		printf("%d %s %f",s[i].rollno,s[i].name,s[i].marks);
	}

}
