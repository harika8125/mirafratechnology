// Implement stringcopy function


#include<stdio.h>
void strcpy1(char des[],char sour[]);
int main()
{
char des[100];
char sour[100];
printf("enter two strings\n");
scanf("%s %s",des,sour);
strcpy1(des,sour);
printf("after copying destination is %s\n",des);
}

void strcpy1(char des[],char sour[])
{
	int i;
	for(i=0;sour[i]!=0;i++)
	{
		des[i]=sour[i];
	}
	des[i]=0;
}
