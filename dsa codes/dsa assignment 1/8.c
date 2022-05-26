/* 8)	A middle class family would always like to spend the money wisely, because of their financial status.
 They can’t afford to purchase the luxurious items unlike the Rich Class family. Even if they do, they do it very occasionally.
  In order to keep track of the expenditure of the entire year, the middle class family maintains a record of how much they spent
  every month of that year.
Assume that for the year 2020, the family maintains a record of expenditure for each month.
At the end of the year, the family would like to know followings about their expenditure.
i)	Which month of the year they spent more (display month number)
ii)	Which month of the year they spent less(display month number)
iii) Which are the months they spent more than 35000 rupees?(display month number)
iv)	Calculate the average expenditure of the family for the year.*/
#include<stdio.h>
void record(int*);
void main()
{
    int spent[12];
    for(int i=1;i<13;i++)
    {
        printf("enter the money spent on %d th month \n",i);
        scanf("%d",&spent[i]);
    }
    record(&spent);
}
void record(int *spent)
{
    float sum,avg;
    int i,max,max_month,min,min_month;
    sum=0;
    max=spent[0];
    min=spent[1];
    for(i=1;i<13;i++)
    {
        sum=sum+spent[i];
        if(spent[i]>max)
        {
            max=spent[i];
            max_month=i;
        }
        if(spent[i]<min)
        {
            min=spent[i];
            min_month=i;
        }
        if(spent[i]>35000)
        {
            printf("in the month of %d they spent more than 35000\n",i);
        }
    }
    avg = sum / 12 ;
    printf("the average expenditure of the family for the year is %f\n",avg);
    printf("month of the year they spent more is %d\n",max_month);
    printf("month of the year they spent less is %d\n",min_month);
}
