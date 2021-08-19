#include<stdio.h>
int main()
{       

	int n,i,j,temp;
	printf("enter n value");
	scanf("%d",&n);

	int a[n];
	printf("enter elements of array");
	for(i=0;a[i]<n;i++)
	{
		scanf("%d",&a[i]);
	}
        for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{       
		        if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	} }
for(i=0;i<n-1;i++)
	printf("%d",a[i]);
}

