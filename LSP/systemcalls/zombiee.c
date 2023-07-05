#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
	int a=100;
	int b=200;
        pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("myself child process and my id:%d\n ",getpid());
		printf("and my parent id %d\n",getppid());
		a=300;
		b=400;
	}
	else
	{
		
		 getchar();
          	int status;
        	wait(&status);
          	getchar();
		printf("myself parent process and my id:%d\n ",getpid());
				printf("and my parent id %d\n",getppid());
		a=500;
		b=600;
	}
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}	
