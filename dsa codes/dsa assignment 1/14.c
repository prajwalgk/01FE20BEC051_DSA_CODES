/*14)	Find equilibrium index in an array. An index is equilibrium, where sum of right side elements is equal to
sum of left side elements.
Ex: A={-7,1,5,2,-4,3,0} Here '3' is equilibrium index since A[0]+A[1]+A[2] = A[4]+A[5]+A[6].*/
#include<stdio.h>
void read(int*,int);
void eq(int*,int);
void main()
{
    int n;
    printf("enter the no. of elements in the array\n");
    scanf("%d",&n);
    int num[n];
    read(&num,n);
    eq(&num,n);
}
void read(int *num,int n)
{
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void eq(int *num,int n)
{
    int key,sum1=0,sum2=0;
    for(int i=1;i<n-1;i++)
    {
        key=i;
        for(int j=0;j<key;j++)
        {
            sum1=sum1+num[j];
        }
        for(int k=key+1;k<n;k++)
        {
            sum2=sum2+num[k];
        }
        if(sum1==sum2)
        {
            printf("the index %d is eq index\n",key);
        }
        sum1=0;
        sum2=0;
    }
}
