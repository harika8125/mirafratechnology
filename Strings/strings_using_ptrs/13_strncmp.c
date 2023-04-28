#include<stdio.h>
int strncmp1(char *s1,char *s2,int n);
int main()
{
	char s1[100];
	char s2[100];
	int x,n;
	printf("enter s1 and s2 strings\n");
	scanf("%s %s",s1,s2);
	printf("enter n value\n");
	scanf("%d",&n);
	x=strncmp1(s1,s2,n);
	if(x>0)
		printf("s1 is greater than s2\n");
	if(x<0)
		printf("s1 is smaller than s2\n");
	if(x==0)
		printf("s1 is equal to s2\n");
}

int strncmp1(char *s1,char *s2,int n)
{
	int i,x;
	for(i=0;i<n;i++,*s1++,*s2++)
	{
		if(*s1>*s2)
			return 1;
		if(*s1<*s2)
			return -1;
		if(*s1==*s2)
			x=0;
	}
	return x;
}

