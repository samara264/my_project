#include<stdio.h>
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	if(n>0)
	{
		while(n%2==0)
		{
			n/=2;
		}
		if(n==1)
		{
			printf("number is power of 2");
		}
		if((n&(n-1))!=0)
		{
			printf("number is not power of 2");
		}
		return 0;
	
	}	
}

