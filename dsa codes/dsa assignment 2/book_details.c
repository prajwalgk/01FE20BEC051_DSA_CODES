#include<stdio.h>
#include<string.h>
struct book
{
    int isbn;
    char author_name[20];
    char book_name[20];
};
void display(struct book* ,int );
void sort(struct book* ,int );
void search(struct book* ,int );
int main()
{
    int n;
    printf("enter the number of books\n");
    scanf("%d",&n);
    struct book* p;
    p=(struct book*)malloc(n*sizeof(struct book));
    for(int i=0;i<n;i++)
    {
        printf("enter the isbn,author name and book name of %d th book \n",i+1);
        scanf("%d",&(p+i)->isbn);
        scanf("%s",(p+i)->author_name);
        scanf("%s",(p+i)->book_name);
    }
    display(p,n);
    sort(p,n);
    search(p,n);
    return 0;
}
void display(struct book* p,int n)
{
    printf("the details of all books are given below \n");
    for(int i=0;i<n;i++)
    {
        printf("the details of %d th book is\n",i+1);
        printf("ISBN number is : %d\n",(p+i)->isbn);
        printf("Author Name is : %s\n",(p+i)->author_name);
        printf("Book name is : %s\n",(p+i)->book_name);
    }
}
void sort(struct book* p,int n)
{
    struct book temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((p+j)->isbn>(p+j+1)->isbn)
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("the book details after sorting\n");
    display(p,n);
}
void search(struct book* p,int n)
{
    int r_isbn;
    printf("enter the required book isbn number\n");
    scanf("%d",&r_isbn);
    for(int i=0;i<n;i++)
    {
        if(r_isbn==(p+i)->isbn)
        {
            printf("ISBN number is : %d\n",(p+i)->isbn);
            printf("Author Name is : %s\n",(p+i)->author_name);
            printf("Book name is : %s\n",(p+i)->book_name);
        }
        else{
            printf("the book with this isbn number is not found\n");
        }
    }
}


