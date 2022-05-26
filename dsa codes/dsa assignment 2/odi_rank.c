#include<stdio.h>
#include<string.h>
struct player
{
    int odi_rank;
    char team_name[20];
    char player_name[20];
};
typedef struct player md;
void display(md* ,int ,FILE *);
void sort(md* ,int );
int main()
{
    FILE *fptr;
    int n;
    printf("enter the number of players details to be stored\n");
    scanf("%d",&n);
    md* p;
    p=(md*)malloc(n*sizeof(md));
    for(int i=0;i<n;i++)
    {
        printf("enter the details of %d th player \n",i+1);
        printf("odi rank,team name and player name\n");
        scanf("%d",&(p+i)->odi_rank);
        scanf("%s",(p+i)->team_name);
        scanf("%s",(p+i)->player_name);
    }
    display(p,n,fptr);
    sort(p,n);
    display(p,n,fptr);
    return 0;
}
void display(md* p,int n,FILE *fptr)
{
    fptr=(fopen("cricket.txt","w"));
    printf("\n");
    printf("the details of players is stored in respective file\n");
    printf("\n");
    for(int i=0;i<n;i++)
    {
        fprintf(fptr,"the details of %d th player is\n",i+1);
        fprintf(fptr,"odi rank of player is : %d\n",(p+i)->odi_rank);
        fprintf(fptr,"team name is : %s\n",(p+i)->team_name);
        fprintf(fptr,"player name is : %s\n",(p+i)->player_name);
    }
    fclose(fptr);
}
void sort(md* p,int n)
{
    md temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((p+j)->odi_rank>(p+j+1)->odi_rank)
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("\n");
}
