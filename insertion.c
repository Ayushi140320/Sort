/*
Q9. Write a C program to sort an array using insertion sort technique.
Name     :Ayushi Sharma
Roll no.  : 16
Section  : C
*/
#include<stdio.h>
#define max 100
void insertion_sort(int[],int);
int main()
{
    int A[max],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    insertion_sort(A,n);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    return 0;
}
void insertion_sort(int A[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        t=A[i];
        j=i-1;
        while(j>=0 && t<A[j])
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=t;
    }
}
