#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
	char s[25];
	int length=0,k;
	bool flag=true;
	printf("enter the string");
	scanf("%[^\n]s",s);
	for(length=0;s[length]!='\0';length);
	for(int i=0;k=length-1;i<(length/2),i++,k--)
	{
		if(s[i]!=s[k])
		{
			flag=false;
			break;
		}
	}
	if(flag)
		printf("palindrome");
	else		
			
		printf("not palindrome");
}
