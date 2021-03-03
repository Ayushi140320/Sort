#include<iostream>
using namespace std;

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int l,int h)
{
	int pivot =arr[h];
	int i=l-1;
	for(j=l;j<h;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return i+1;
}
void QuickSort(int arr[],int l,int h)
{
	int pivot;
	if(l<h)
	{
		randomisation(arr,l,r);
		pivot =partition(arr,l,h);
		QuickSort(arr,l,pivot-1);
		QuickSort(arr,pivot+1,h);
	}
}
int main()
{
	
	int arr[]={2,5,3,1,2,5,7,8,3,1};
	int n=10,i,j,temp,index;
	QuickSort(arr,0,n);
	display(arr,n);
}