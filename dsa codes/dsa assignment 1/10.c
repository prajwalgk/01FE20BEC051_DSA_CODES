/*10)	Ashish is studying in 3RD standard in KENDRIYA VIDYALA, Hubballi.  He is writing the Mathematics Test in the school.

One of the questions was to find the PRIME NUMBERS among a set of N numbers. Help Ashish to find the PRIME numbers.*/
#include<stdio.h>
void prime(int*,int );
void main()
{
    int n;
    printf("enter the total count of numbers \n");
    scanf("%d",&n);
    int num[n];
    printf("enter the numbers list \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    prime(&num,n);
}
void prime(int *num,int n)
{
    int k;
    k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<num[i];j++)
        {
            if( num[i]%j == 0)
            {
                k=1;
            }
        }
        if(k==0)
        {
            printf("the number %d is prime\n",num[i]);
        }
        else if(k==1)
        {
            printf("the number %d is non-prime\n",num[i]);
        }
        k=0;
    }
}
