/* 19)	Read n number and sort  them using bubble sort */
#include<stdio.h>
void ascending(int a[],int );
void descending(int a[],int );

int main()
{

    int n,i;
    printf("enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ascending(a,n);
    descending(a,n);
}

void ascending(int a[], int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
            }

        }

    }
    printf("Ascending order\n");
    for(i=0;i<n;i++)
   {
       printf("%d\n",a[i]);
   }
}


void descending(int a[], int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
            }

        }

    }
    printf("Descending order\n");
    for(i=0;i<n;i++)
   {
       printf("%d\n",a[i]);
   }
}
