#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int low,int high)
{
	int pivot=a[high];
	int i=low-1;
	for(int j=low;j<high;j++)

	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	return (i+1);
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}
void print(int a[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d",a[i]);
}
int main()
{
	int a[]={1,8,7,2,0,9,6};
	int n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n-1);
	print(a,n);
}


