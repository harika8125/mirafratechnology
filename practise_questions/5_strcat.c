// Implement strcat function

#include<stdio.h>
void strcat1(char d[],char s[]);
int main()
{
	char d[100];
	char s[100];
	printf("enter two strings\n");
	scanf("%s %s",s,d);
	strcat1(d,s);
	printf("destination output is %s\n",d);
}


void strcat1(char d[],char s[])
{
	int j=0;
	while(d[j]!='\0')
	{
		j++;
	}
	int i;
	for(i=0;s[i]!='\0';i++,j++)
	{
		d[j]=s[i];
	}
	d[j]=0;
}
