/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<string.h>
#include<stdio.h>

int length(char s[100]){
    int i,j,k,len;
    for(i=0;i<strlen(s);i++)
    {
     for(j=i+1;j<strlen(s);)
     {
         if(s[i]==s[j])
         {
             for(k=j;k<strlen(s);k++)
             {
                 s[k]=s[k+1];
             }
                 
         }
         else
             j++;
     }
    
    }
for(k=0;s[k]!='\0';k++)
{
len++;
}
printf("%d",len);
}
int main()
{
    char str[100];
    printf("enter the string");
    scanf("%s",str);
    length(str);
}
