#include<stdio.h>
int main()
{
int x=0x12345678;
printf("before conversion:%x\n",x);
x=(x&0xff000000)>>24 | (x&0x000000ff)<<24 | (x&0x00ff0000)>>8 | (x&0x0000ff00)<<8;
printf("after conversion:%x\n",x);
}


