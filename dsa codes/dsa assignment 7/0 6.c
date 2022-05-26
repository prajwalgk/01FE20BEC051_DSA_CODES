/*Arjun and Bheem are playing a game. In this game both of them are provided with the stack of n numbers. Strategy to play the game is: Arjun and Bheem pick an element from their stacks.

Method to be followed to play the game is:

a. If the number picked by Arjun is bigger than Bheem then this step's output is 1. Bheem removes the number that was picked from his stack.

b. If the number picked by Arjun is smaller than Bheem then this step's output is 2. Arjun removes the number that was picked from his stack.

c. If both have the same number then this step's output is 0. Both Arjun and Bheem remove the number that was picked from their stack. The game ends when at least one of them has no more elements to be picked.

The game ends when at least one of them has no more elements to be picked.

Input Format

First line consists of a number n, size of the stack provided.

Second line consists of n numbers of Arjun separated by space.

Third line consists of n numbers of Bheem separated by space.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct game
{
    int data;
    struct game *next;
}*node;

node push(node top,int num)
{
    node newnode=(node)malloc(sizeof(struct game));
    if(newnode==NULL)
    {
        printf("memoryless");
        exit(0);
    }
    newnode->data=num;
    if(top==NULL)
        newnode->next=NULL;
    else
        newnode->next=top;
    return newnode;
}

node pop(node top)
{
    if(top==NULL)
    {
        printf("underflow");
    }
    else
    {
        node temp=top;
        top=top->next;
        free(temp);
    }
    return top;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    node top1=NULL,top2=NULL;
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        top1=push(top1,num);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        top2=push(top2,num);
    }
    int num1,num2;
    node cur1=top1,cur2=top2;
    while(cur1!=NULL&&cur2!=NULL)
    {
        num1=cur1->data;
        num2=cur2->data;
        if(num1>num2)
        {
            printf("1 ");
            cur2=pop(cur2);
        }
        if(num1<num2)
        {
            printf("2 ");
            cur1=pop(cur1);
        }
        if(num1==num2)
        {
            printf("0 ");
            cur1=pop(cur1);
            cur2=pop(cur2);
        }
    }
    return 0;
}
