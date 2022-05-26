/*You are given a stack of N integers. You need to replace first element by last element and vice versa and continue the same for rest of the elements of stack. One thing you need to follow is, you should reverse the integer and then replace it. And also pop the integers after replacing.

Input Format

First line indicates the number of elements in stack. N.

Second line indicates N number of elements of stack.

Third line indicates number of elements to be popped from the stack.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
}*node;

node getnode(int num)
{
    node newnode;
    newnode=(node)malloc(sizeof(struct stack));
    if(newnode==NULL)
    {
        printf("error\n");
        exit(0);
    }
    newnode->data=num;
    newnode->next=NULL;
    return newnode;
}

node push(node top,int num)
{
    node newnode=getnode(num);
    if(top==NULL)
    {
        top=newnode;
        return top;
    }
    node temp=top;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return top;
}

node pop(node top)
{
    if(top==NULL)
    {
        printf("underflowed");
    }
    else{
        node temp=top;
        top=top->next;
        free(temp);
    }
    return top;
}

void display(node top)
{
    if(top==NULL)
    {
        printf("underflowed");
    }
    else{
        node cur=top;
        int n,r,new;
        while(cur!=NULL)
        {
            n=cur->data;
            new=0;
            while(n!=0)
            {
                r=n%10;
                new=new*10+r;
                n=n/10;
            }
            printf("%d ",new);
            cur=cur->next;
        }
        printf("\n");
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,data,n_pop;
    node top=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        top=push(top,data);
    }
    scanf("%d",&n_pop);
    for(int i=0;i<n_pop;i++)
    {
        top=pop(top);
    }
    display(top);
    return 0;
}

