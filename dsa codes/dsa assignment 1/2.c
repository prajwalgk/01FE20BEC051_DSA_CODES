// 2) Read an array of n numbers. Input the number from keyboard (consider it as a key number) and
//    check whether the key number is present in the array or not, also display the index at which the key number is present.
#include<stdio.h>
void check(int* ,int );
void main()
{
    int n;
    printf("enter the size of array \n");
    scanf("%d",&n);
    int num[n];
    printf("enter the array elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    check(&num,n);
}
void check(int *num,int n)
{
    int i,k,j,x=sizeof(int);
    j=0;
    printf("enter the key word \n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(*(num+i*x)==k)
        {
            j=j+1;
            printf("the keyword is present!!! at the index %d",i);
        }
        else{

        }
    }
    if(j==0)
    {
        printf("the keyword is not there");
    }
}
