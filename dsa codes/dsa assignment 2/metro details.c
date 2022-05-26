#include<stdio.h>
#include<string.h>
struct metro
{
    int age;
    float price;
    char from[20];
    char to[20];
};
typedef struct metro md;
void display(md* ,int );
void search(md* ,int );
int main()
{
    int n;
    printf("enter the number of passengers\n");
    scanf("%d",&n);
    md* p;
    p=(md*)malloc(n*sizeof(md));
    for(int i=0;i<n;i++)
    {
        printf("enter the details of %d th passenger \n",i+1);
        printf("age,price,from and to station\n");
        scanf("%d",&(p+i)->age);
        scanf("%f",&(p+i)->price);
        scanf("%s",(p+i)->from);
        scanf("%s",(p+i)->to);
    }
    display(p,n);
    search(p,n);
    return 0;
}
void display(md* p,int n)
{
    printf("\n");
    printf("the details of passengers \n");
    for(int i=0;i<n;i++)
    {
        printf("the details of %d th passenger is\n",i+1);
        printf("age is : %d\n",(p+i)->age);
        printf("cost of ticket is: %f\n",(p+i)->price);
        printf("from station is : %s\n",(p+i)->from);
        printf("to station is : %s\n",(p+i)->to);
        printf("\n");
    }
}
void search(md* p,int n)
{
    char r_from[20],r_to[20];
    printf("enter the from station\n");
    scanf("%s",r_from);
    for(int i=0;i<n;i++)
    {
        if(strcmp(r_from,(p+i)->from)==0)
        {
           printf("age is : %d\n",(p+i)->age);
           printf("cost of ticket is: %f\n",(p+i)->price);
           printf("from station is : %s\n",(p+i)->from);
           printf("to station is : %s\n",(p+i)->to);
        }
    }
    printf("enter the to station\n");
    scanf("%s",r_to);
    for(int i=0;i<n;i++)
    {
        if(strcmp(r_to,(p+i)->to)==0)
        {
           printf("age is : %d\n",(p+i)->age);
           printf("cost of ticket is: %f\n",(p+i)->price);
           printf("from station is : %s\n",(p+i)->from);
           printf("to station is : %s\n",(p+i)->to);
        }
    }
}


