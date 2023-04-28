#include<stdio.h>
int stricmp1(char *s1,char *s2);
int main()
{
	char s1[100];
	char s2[100];
	int x;
	printf("enter s1 and s2 strings\n");
	scanf("%s %s",s1,s2);
	x=stricmp1(s1,s2);
	if(x>0)
		printf("s1 is greater than s2\n");
	if(x<0)
		printf("s1 is smaller than s2\n");
	if(x==0)
		printf("s1 is equal to s2\n");
}

int stricmp1(char *s1,char *s2)
{
	int i,j;
	for(i=0,j=0;*s1!=0||*s2!=0;i++,j++,*s1++,*s2++)
	{
		if(*s1>=65&&*s1<=90)
			*s1=*s1+32;
		if(*s2>=65&&*s2<=90)
			*s2=*s2+32;
		if(*s1>*s2)
			return 1;
		if(*s1<*s2)
			return -1;
	}

	if(*s1==0&&*s2==0)
		return 0;
	if(*s1!=0&&*s2==0)
		return 1;
	if(*s1==0&&*s2!=0)
		return -1;
}
