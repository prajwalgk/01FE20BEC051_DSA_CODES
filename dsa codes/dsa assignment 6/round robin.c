/*Round Robin is a popular CPU scheduling algorithm in operating systems where each process is assigned a fixed time slot for execution in a cyclic way. CPU is assigned to the process on the basis of FCFS for a fixed amount of time. This fixed amount of time is called as time quantum or time slice. After the time quantum expires, the process is removed and sent to the ready queue. Then, the CPU is assigned to the next arrived process. Apply problem solving framework to simulate round robin algorithm and display the queue of processes and ready queue after M number of cycles.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct details
{
    int p_num;
    int time;
    struct details *next;
}*node;

node front=NULL;
node rear=NULL;

void read()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        node temp=(node)malloc(sizeof(struct details));

    scanf("%d%d",&temp->p_num,&temp->time);
    if(front==NULL)
    {
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
    }
}

void display(){
    int t,m;
    char T[5],M[5];
    scanf("%s%d%s%d",T,&t,M,&m);
    t=t*m;
    node cur=front;
    while(cur!=rear->next){
        cur->time-=t;
        cur=cur->next;
    }

    int flag=0;
    cur=front;
    while(cur!=rear->next)
    {
        if(cur->time>0){
            printf("%d %d\n",cur->p_num,cur->time);
            flag=1;
        }
        cur=cur->next;

    }
    if(flag==0)
        printf("Queue Empty\n");
    cur=front;
    flag=0;
    printf("Ready Queue\n");
    int a[50];
    int l=0;
    int cnt=0;
    while(cur!=rear->next)
    {
        if(cur->time<=0){
            a[l]=cur->p_num;
            cnt++;
            l++;
            flag=1;
        }
        cur=cur->next;

    }
    if(flag==0)
        printf("Queue Empty");

    for(l=cnt-1;l>=0;l--){
        printf("%d 0\n",a[l]);
    }
}

int main() {
    read();
    display();

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
