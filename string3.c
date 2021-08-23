#include<stdio.h>
void lowercase(char s[]);
int main()
{
	char s[100];
	printf("enter the string:");
	fgets(s,10,stdin);
	lowercase(s);
}
	void lowercase(char s[])
{
	int i;
        for(i=0;s[i]!='\0';i++)
	{
	if(s[i]>='A'&& s[i]<='Z')
	s[i]=s[i]+32;
	}
	printf("lower case is%s",s);
        
}

