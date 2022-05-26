/*3)   There is a company NI Infotech which has N number of employees working in it. NI Infotech gives
       bonus to its employees according to the following terms and conditions.
        S.No	Experience (years)	Basic Salary	Bonus  applicable
        1	        5-7	              10600	         10%  of basic
        2	        8-10	          21300	         20% of basic
        3	        10>	              32100	         30% of basic
      calculate the bonus for N employees and display the salary of N employees after getting bonus.*/
#include<stdio.h>
void salary(int*,int*);
void main()
{
    int n;
    printf("enter the no. of employees\n");
    scanf("%d",&n);
    int employee[n];
    printf("enter the experience year of all employees \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&employee[i]);
    }
    salary(&employee,&n);
}
void salary(int *employee,int n)
{
    float bonus,ts;
    for(int i=0;i<n;i++)
    {
        if(employee[i] >=5 && employee[i] <=7)
        {
            bonus = 10 * 10600 / 100;
            ts = 10600 + bonus;
            printf("the bonus and total salary of %d th employee is %f and %f\n",i,bonus,ts);
        }
        else if(employee[i] >=8 && employee[i] <=10)
        {
            bonus = 20*21300/100;
            ts = 21300 + bonus;
            printf("the bonus and total salary of %d th employee is %f and %f\n",i,bonus,ts);
        }
        else if(employee[i] >10)
        {
            bonus = 30 * 32100 / 100;
            ts = 32100 + bonus;
            printf("the bonus and total salary of %d th employee is %f and %f\n",i,bonus,ts);
        }
        else
        {
            printf("the experience year not met of %d th employee\n",i);
        }
    }
}
