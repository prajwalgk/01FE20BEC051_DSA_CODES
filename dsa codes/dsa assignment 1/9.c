/*9)	C programming for problem solving is a course offered to first semester students of KLE Technological University.
 The course conducts POST TESTs to students for a maximum of 10 marks. Once all the POST TESTS are conducted,
  the marks scored by each student will be announced. Help the course teacher to do the followings.
i)	How many students scored EVEN marks?
ii)	How many students scored ODD marks?
iii)	Find, if any student scored 100% marks? Display appropriate message.
iv)	How many students scored 100% marks?*/
#include<stdio.h>
void report(int*,int );
void main()
{
    int n;
    printf("enter the number of students \n");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks obtained by each student \n");
    for(int i=1;i<n+1;i++)
    {
        scanf("%d",&marks[i]);
    }
    report(&marks,n);
}
void report(int *marks,int n)
{
    int even,odd,count;
    even=0;
    odd=0;
    count=0;
    for(int i=1;i<n+1;i++)
    {
        if(marks[i]%2==0)
        {
            even++;
        }
        if(marks[i]%2!=0)
        {
            odd++;
        }
        if(marks[i]==10)
        {
            count++;
            printf("The person with roll number %d has got 100%\n",i);
        }
    }
    printf("the no. of students scored EVEN marks is %d\n",even);
    printf("the no. of students scored ODD marks is %d\n",odd);
    printf("the no. of students scored 100% marks is %d\n",count);
}
