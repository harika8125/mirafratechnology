#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};

struct student s={1,"harika",2.0};
int main()
{
	struct student *ptr=&s;
	
		printf("%d %s %f",ptr->rollno,ptr->name,ptr->marks);
	

}
