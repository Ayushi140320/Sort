#include<stdio.h>
#define max 100
void selection_sort(int[],int);
int main()
{
    int A[max],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    selection_sort(A,n);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    return 0;
}
void selection_sort(int A[],int n)
{
    int i,j,pos,min;
    for(i=0;i<n-1;i++)
    {
        min=A[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<min)
            {
                min=A[j];
                pos=j;
            }
        }
    if(pos!=i)
    {
        A[pos]=A[i];
        A[i]=min;
    }
    }
}
