/*12)	Write a modular c program to perform the following:
 a) Read 1D array
 b) Display 1D array
 c) To find the maximum digit in every element of an array and find sum of all maximum digits.
Write a suitable main function to call the above user defined functions
        Example:
	Input: arr[3] = {132,458,732}
	Output: Maximum digit in a[0]=3
	Maximum digit in a[1]=8
	Maximum digit in a[2]=7
	Sum=3+8+7=18*/
#include<stdio.h>
void read(int*,int);
void display(int*,int);
void max(int*,int);
void main()
{
    int n;
    printf("enter the no. of elements in the array\n");
    scanf("%d",&n);
    int num[n];
    read(&num,n);
    display(&num,n);
    max(&num,n);
}
void read(int *num,int n)
{
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void display(int *num,int n)
{
    printf("the array elements were listed below\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}
void max(int *num,int n)
{
    int sum,temp,rem;
    sum=0;
    for(int i=0;i<n;i++)
    {
        temp=0;
        while(num[i]!=0)
        {
            rem=num[i]%10;
            if(rem>temp)
            {
                temp=rem;
            }
            num[i]=num[i]/10;
        }
        printf("maximum digit of %d th element of the list is == %d\n",i,temp);
        sum=sum+temp;
    }
    printf("summation of all the maximum digits is == %d\n",sum);
}
