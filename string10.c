#include<stdio.h>
#include<string.h>
int count(char s[]);
int main()
{
	char s[10];
	int temp;
	printf("enter the string");
	scanf("%s",s);
	count(s);
}
int count(char s[])
{
	int i,temp=0;
	int len=strlen(s);
	for(i=0;i<len;i++)
	{
	temp=temp+1;
	}	
	printf("%d",temp);
}
