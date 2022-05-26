/* 11)	Godrej constructed a new Apartment with N flats, in Hubballi. At the end of each month the Secretary of the apartment,
 collects the total units of electricity consumed by each flat.  As per the table given below, help Secretary to calculate the
  total bill to be paid by each flat.

Units Consumed	Charges apply
0-100	1.5 Rs/Unit
101-250	2.3 Rs/Unit, for above 100 units
251-600	4.0 Rs/Unit, for above 250 units
Above 600	5.5 Rs/Unit, for above 600 units */
#include<stdio.h>
void bill(int*,int );
void main()
{
    int n;
    printf("enter the no. of flats \n");
    scanf("%d",&n);
    int units[n];
    printf("enter units of electricity consumed by all the each flats \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&units[i]);
    }
    bill(&units,n);
}
void bill(int *units,int n)
{
    float total_bill;
    total_bill=0;
    for(int i=0;i<n;i++)
    {
        if(units[i]>=0 && units[i]<=100)
        {
            total_bill = 1.5 * units[i];
            printf("total bill paid by the %d th flat is %f\n",i,total_bill);
        }
        if(units[i]>=101 && units[i]<=250)
        {
            total_bill = (2.3 * (units[i] - 100) ) + (1.5 * 100) ;
            printf("total bill paid by the %d th flat is %f\n",i,total_bill);
        }
        if(units[i]>=251 && units[i]<=600)
        {
            total_bill = (4 * (units[i] - 250)) + (2.3 * 150) + (1.5*100);
            printf("total bill paid by the %d th flat is %f\n",i,total_bill);
        }
        if(units[i]>600)
        {
            total_bill = (5.5 * (units[i] - 600) ) + (4 * 350) + (2.3 * 150) +(1.5*100);
            printf("total bill paid by the %d th flat is %f\n",i,total_bill);
        }
    }
}
