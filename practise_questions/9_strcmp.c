// Implement string strcmp function.

#include<stdio.h>
int x;
int strcmp1(char s1[],char s2[]);
int main()
{
	char s1[100];
	char s2[100];
	printf("enter s1 and s2 string\n");
	scanf("%s %s",s1,s2);
	x=strcmp1(s1,s2);
	if(x<0)
		printf("string1 is less than string2\n");
	if(x>0)
		printf("string1 is greater than string2\n");
	if(x==0)
		printf("string1 is equal to string2\n");
}

int strcmp1(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!=0&&s2[i]!=0;i++)
	{
		if(s1[i]<s2[i])
			return -1;
		else if(s1[i]>s2[i])
			return 1;
	}

	if(s1[i]==0&&s2[i]==0)
		return 0;
	if(s1[i]==0&&s2[i]!=0)
		return -1;
	if(s1[i]!=0&&s2[i]==0)
		return 1;
}
