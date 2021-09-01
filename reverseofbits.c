#include<stdio.h>
int main()
{
unsigned char i,j,n;
printf("enter the number");
scanf("%u",&n);
for(i=0,j=(sizeof(char)*8)-1;i<j;i++,j--)
{
	if(!(n & (1<<i))== !(n & (1<<j)))
        	continue;	
		
	n^=(1<<i);
	n^=(1<<j);
}
printf("the result is:%d",n);
}
