/*7)	Income tax department will collect the tax from the tax payers all around the Nation.
 For the financial year 2019-20, assume that the Income tax department has collected the tax from N number of tax payers.
  Help the Income tax department to do the followings.

i)	Calculate the total number of tax payers who paid tax more than 2.5lakhs.
ii)	Calculate the total number of tax payers who paid tax between 50000 rupees to 150000rupees.
iii)	Calculated the average tax collected.*/
#include<stdio.h>
void taxes(int*,int);
void main()
{
    int n;
    printf("enter the no of tax payer \n");
    scanf("%d",&n);
    int tax[n];
    printf("enter the taxes paid \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tax[i]);
    }
    taxes(&tax,n);
}
void taxes(int *tax,int n)
{
    int count1,count2;
    float sum,avg;
    count1=0;
    count2=0;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+tax[i];
        if(tax[i]>=250000)
        {
            count1=count1+1;
        }
        if(tax[i]>=50000 && tax[i]<=150000)
        {
            count2=count2+1;
        }
    }
    avg = sum / n;
    printf("the average tax paid is %f\n",avg);
    printf("the total number of tax payers who paid tax more than 2.5lakhs is %d\n",count1);
    printf("the total number of tax payers who paid tax between 50000 rupees to 150000rupees is %d\n",count2);
}
