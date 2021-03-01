#include<stdio.h>
#define max 100
void bubble_sort(int[],int);
int main()
{
    int A[max],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    bubble_sort(A,n);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    return 0;
}
void bubble_sort(int A[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                t=A[j+1];
                A[j+1]=A[j];
                A[j]=t;
            }
        }
    }
}
