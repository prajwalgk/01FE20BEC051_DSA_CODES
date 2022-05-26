/* 4) In a class there are 10 students. Course teacher of “DS with Applications ” wants to calculate the class average and
      also count total number of students who scored above and below class average.
      Most of the students IQ is very high. Help course teacher to solve the above problem. */
#include<stdio.h>
void calculations(int*,int);
void main()
{
    int n;
    printf("enter the no. of students \n");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks obtained by each student in DSA course subject \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    calculations(&marks,n);
}
void calculations(int *marks,int n)
{
    int i,above,below;
    float sum,avg;
    sum=0;
    above=0;
    below=0;
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    avg = sum / n;
    printf("the class average is %f\n",avg);
    for(i=0;i<n;i++)
    {
        if(marks[i]>=avg)
        {
            above=above+1;
        }
        if(marks[i]<avg)
        {
            below=below+1;
        }
    }
    printf("the no. of students above class avg is %d\n",above);
    printf("the no. of students below class avg is %d\n",below);
}
