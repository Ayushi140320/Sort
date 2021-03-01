#include<stdio.h>
#define max 100
void quick_sort(int[],int,int);
int main()
{
    int A[max],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    quick_sort(A,0,n-1);
    for(i=0;i<n;i++)
        printf("%d",A[i]);
    return 0;
}


void quick_sort(int A[],int LB,int UB)                          //definition of quick sort()
{
    int i=LB,j=UB,key=A[i],t=0;
    if(LB>=UB)
        return;
    while(i<j)
    {
            while(key>=A[i] && i<j)
                i++;
            while(key<A[j])
                j--;
            if(i<j)
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
      }
    A[LB]=A[j];
    A[j]=key;
    quick_sort(A,LB,j-1);
    quick_sort(A,j+1,UB);
}
