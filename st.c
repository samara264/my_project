#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="samara";
	char str2[100]="ara";
	int i,j;
	int a,b;
	a=strlen(str1);
	b=strlen(str2);
	for(i=0;i<a;i++)

	{
		for(j=0;j<b;j++)
		{
			if(str1[i+j]!=str2[j])
			{
				break;
			}
		}
		if(j==b)
		{
			printf("string found at location %d",i);
		}
	}

}



