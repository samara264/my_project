#include<stdio.h>
void mergesort(int a[],int lb,int ub)
{
if(lb<ub)
{	
int mid=(lb+ub)/2;
mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
void merge(int a[],int,int,int);
merge(a,lb,mid,ub);
}
}
void merge(int a[],int lb,int mid,int ub)
{
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[30];
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
		b[k]=a[i];
		i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
        k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
		b[k]=a[j];
		j++;
		k++;
		}
	}
	else
	{
		while(i<=mid)
		{
		b[k]=a[i];
		i++;
		k++;
		}
	}
	for(k=lb;k<=ub;k++)
		a[k]=b[k];
}
int main()
{
	int a[100],n,i,lb,ub;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the elements for array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	lb=0;
	ub=n-1;
	mergesort(a,lb,ub);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}



