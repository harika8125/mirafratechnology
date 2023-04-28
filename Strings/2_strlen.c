//Implement the string length function


#include<stdio.h>
int strlen1(char str[]);
int main()
{
	int l;
	char str[100];
	printf("enter the string\n");
	scanf("%[^20\n]s",str);
	l=strlen1(str);
	printf("length of string is%d\n",l);
}

int strlen1(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
} 
