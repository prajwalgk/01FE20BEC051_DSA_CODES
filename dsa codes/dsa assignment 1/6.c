/* 6)	KLE Technological University is a well know university for its academic excellence and Innovations.
 Top ranked students, always prefer the University for their Graduation in BE. Assume that for the year 2020-21
 there are N students admitted to the university for the 1st year. Help University to do the followings.
i)	Read the rankings of N students.
ii)	Arrange the rankings in ascending order.
iii)	Display the highest and lowest ranks of students.*/
#include<stdio.h>
void ascending(int*,int );
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int n;
    printf("enter the no. of students \n");
    scanf("%d",&n);
    int ranks[n];
    printf("enter the ranks of all the students \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ranks[i]);
    }
    ascending(&ranks,n);
}
void ascending(int *ranks,int n)
{
    int i,j,min;
    for(j=0;j<n;j++)
    {
        min=j;
    for(i=j;i<n;i++)
    {
        if(ranks[i]<ranks[min])
        {
            min=i;
        }
        swap(&ranks[min],&ranks[j]);
    }
    }
    printf("the ascending array is \n");
    for(i=0;i<n;i++)
    {
       printf("%d ",ranks[i]);
    }
    printf("\nthe max rank is %d\n",ranks[n-1]);
    printf("the min rank is %d\n",ranks[0]);
}
