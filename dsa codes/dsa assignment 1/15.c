/*15)	Calculate the minimum number of platforms required for a railway station so that no train waits.
 Given arrival and departure of all trains (in 24Hr format) in separate arrays.
 	  Ex: arr[] = {9.00, 9.40, 9.50, 11.00, 15.00, 18.00}
		dep[] = {9:10, 12.00, 11.20, 11.30, 19.00, 20.00}*/
#include<stdio.h>

void read(float*,int);
void platform(float*,float*,int);

void main()
{
    int n;
    printf("enter the number of elments\n");
    scanf("%d",&n);
    float arr[n],dep[n];
    read(&arr,n);
    read(&dep,n);
    platform(&arr,&dep,n);
}

void read(float *num,int n)
{
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&num[i]);
    }
}

void platform(float *a,float *b,int n)
{
    int i,j,max=0,count;
    for(i=1;i<n;i++)
    {
        count=0;
        for(j=0;j<i;j++)
        {
            if(a[i]<b[j]) count++;
        }
        if(count>max)
            max=count;
    }
    printf("%d",max+1);
}
