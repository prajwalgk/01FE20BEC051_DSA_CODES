/* 5)	KLE Technological University is a well know university for its academic excellence and Innovations.
        It provides a well structured LIBRARY facility for its students. Students can avail book facility of the LIBRARY.
        A student can take a book for a period of maximum of 15 days.
        If returned after the deadline, a student has to pay penalty of Rs 2.0/day.

        In the month of January 2021, there are N students who returned the book late. For each student,
        read the number of days after the deadline, he/she is returning the book. calculate the followings.
        i)	 Calculate the average penalty collected.
        ii)	 Calculate the Maximum penalty paid by a student.
        iii) Calculate the minimum penalty paid by a student.
        iv)	 Calculate the total penalty collected. */
#include<stdio.h>
void calculations(int*,int);
void main()
{
    int n;
    printf("enter the no. of students \n");
    scanf("%d",&n);
    int days[n];
    printf("enter the no. of days submitted by a student lately \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&days[i]);
    }
    calculations(&days,n);
}
void calculations(int *days,int n)
{
    int i,total_days,total_penalty,max,min,max_penalty,min_penalty;
    total_days=0;
    float avg;
    for(i=0;i<n;i++)
    {
        total_days=total_days+days[i];
    }
    total_penalty = total_days * 2;
    avg = total_penalty / n;
    printf("the total penalty collected is %d\n",total_penalty);
    printf("the avg penalty is %f\n",avg);
    max=days[0];
    min=days[1];
    for(i=0;i<n;i++)
    {
        if(days[i]>max)
        {
            max=days[i];
        }
        if(days[i]<min)
        {
            min=days[i];
        }
    }
    max_penalty=max*2;
    min_penalty=min*2;
    printf("the maximum penalty paid is %d\n",max_penalty);
    printf("the minimum penalty paid is %d\n",min_penalty);
}
