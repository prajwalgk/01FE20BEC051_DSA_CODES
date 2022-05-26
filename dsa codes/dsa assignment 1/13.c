/*13)	Write a modular C program to read a list of n random numbers and check whether each element of an array is perfect number
 or not.*/
#include<stdio.h>
void read(int*,int);
void perfect(int*,int);
void main()
{
    int n;
    printf("enter the number of elments\n");
    scanf("%d",&n);
    int num[n];
    read(&num,n);
    perfect(&num,n);
}
void read(int *num,int n)
{
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void perfect(int *num,int n)
{
    int sum;
    sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<num[i];j++)
        {
            if(num[i]%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==num[i])
        {
            printf("the number %d is a perfect\n",num[i]);
        }
        if(sum!=num[i])
        {
            printf("the number %d is not a perfect\n",num[i]);
        }
        sum=0;
    }
}
