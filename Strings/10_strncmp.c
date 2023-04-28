#include<stdio.h>
int mystrncmp(char s1[], char s2[], int n);
int main()
{
	int x,n;
	printf("enter the n size\n");
	scanf("%d",&n);
	char s1[n];
	char s2[n];
	printf("enter the string1:\n");
	scanf("%s",s1);
	printf("enter the string2:\n");
	scanf("%s",s2);
	x=mystrncmp(s1,s2,n);
	if(x<0)
		printf("string1 is smaller then string2\n");
	if(x==0)
		printf("string1 is equalto string2\n");
	if(x>0)
		printf("string1 is greater than string2\n");
}
int mystrncmp(char s1[],char s2[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i]<s2[i])
			return -1;
		else if(s1[i]>s2[i])
			return 1;
	}
	if(s1[i]==s2[i])
		return 0;
	if(s1[i]!=0&&s2[i]==0)
		return -1;
	if(s1[i]==0&&s2[i]!=0)
		return 1;
}

