/*16)	Write a modular C program to reverse an array.*/
#include<stdio.h>
void read(int*,int);
void reverse(int*,int);
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int n;
    printf("enter the number of elments\n");
    scanf("%d",&n);
    int num[n];
    read(&num,n);
    reverse(&num,n);
}
void read(int *num,int n)
{
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void reverse(int *num,int n)
{
    for(int i=0;i<n/2;i++)
    {
        swap(&num[i],&num[n-i-1]);
    }
    printf("the reversed array is give by\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}
