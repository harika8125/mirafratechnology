#include<stdio.h>
void main()
{
	enum shape 
	{
		circle,triangle,rectangle
	};
	printf("hi choose shape!! \n 0 for circle \n 1 for traingle \n 2 for rectangle\n");
	int ch;
	scanf("%d",&ch);
	switch (ch)
	{
		case circle: printf("u have choosen circle\n");
			     break;
		case triangle: printf("u have choosen triangle\n");
			       break;
		case rectangle: printf("u have choosen rectangle\n");
				break;
	}
}
