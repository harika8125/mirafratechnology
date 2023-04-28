#include<stdio.h>
void strrev1(char *s);
int strlen1(char *s);
int l;
int main()
{
	char s[100];
	printf("enter a string\n");
	scanf("%s",s);
	l=strlen1(s);
	printf("%d\n",l);
	strrev1(s);
	printf("%s\n",s);
}

void strrev1(char *s)
{
	int i,j,t;
		for(i=0,j=l-1;i<j;i++,j--)
		{
			t=*(s+i);
			*(s+i)=*(s+j);
			*(s+j)=t;
		
		}
}

int strlen1(char *l)
{
	int i=0;
	while(*l!=0)
	{
		i++;
		*l++;
	}
	return i;
}
