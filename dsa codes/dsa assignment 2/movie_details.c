#include<stdio.h>
#include<string.h>
struct movie
{
    int year;
    char director[20];
    char phouse[20];
};
typedef struct movie md;
void display(md* ,int );
void search(md* ,int );
void sort(md* ,int );
int main()
{
    int n;
    printf("enter the number of movies details to be stored\n");
    scanf("%d",&n);
    md* p;
    p=(md*)malloc(n*sizeof(md));
    for(int i=0;i<n;i++)
    {
        printf("enter the details of %d th movie \n",i+1);
        printf("year,director name and production house\n");
        scanf("%d",&(p+i)->year);
        scanf("%s",(p+i)->director);
        scanf("%s",(p+i)->phouse);
    }
    display(p,n);
    sort(p,n);
    search(p,n);
    return 0;
}
void display(md* p,int n)
{
    printf("\n");
    printf("the details of movies \n");
    for(int i=0;i<n;i++)
    {
        printf("the details of %d th movie is\n",i+1);
        printf("year released is : %d\n",(p+i)->year);
        printf("director name is : %s\n",(p+i)->director);
        printf("production house is : %s\n",(p+i)->phouse);
        printf("\n");
    }
}
void sort(md* p,int n)
{
    md temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((p+j)->year>(p+j+1)->year)
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("the movie details after sorting\n");
    display(p,n);
}
void search(md* p,int n)
{
    char name[20],house[20];
    printf("enter the director name required\n");
    scanf("%s",name);
    for(int i=0;i<n;i++)
    {
        if(strcmp(name,(p+i)->director)==0)
        {
            printf("\n");
            printf("year released is : %d\n",(p+i)->year);
            printf("director name is : %s\n",(p+i)->director);
            printf("production house is : %s\n",(p+i)->phouse);
        }
    }
    printf("enter the production house\n");
    scanf("%s",house);
    for(int i=0;i<n;i++)
    {
        if(strcmp(house,(p+i)->phouse)==0)
        {
            printf("\n");
            printf("year released is : %d\n",(p+i)->year);
            printf("director name is : %s\n",(p+i)->director);
            printf("production house is : %s\n",(p+i)->phouse);
        }
    }
}



