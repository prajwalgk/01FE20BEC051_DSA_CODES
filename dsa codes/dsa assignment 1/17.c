/*17) Read the 2 sets(2 arrays) of numbers with same size n. Then exchange the content of two sets.
*/
#include<stdio.h>
void exchange(int a[],int b[],int n);
int main()
{
    int n,i;
    printf("enter size of arrays\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter elements of first array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements of second array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    exchange(a,b,n);
}

void exchange(int a[],int b[],int n)
{
    int temp,i;
    for(i=0;i<n;i++)
    {
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
    }
    printf("array elements of first array after exchanged\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n");
    printf("array elements of second array after exchanged\n");
    for(i=0;i<n;i++)
   {
    printf("%d\t",b[i]);
   }
}
