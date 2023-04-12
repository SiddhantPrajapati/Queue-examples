//double ended queue
#include<stdio.h>
#define max 5
int ins_r(int);
int ins_f(int);
int del_r(int);
int del_f(int);       //ins=insert and del=delete , r=rear , f=front
int display(int);
int q[max],rear,front,val;
int ins_r(int rear)
{
    if(rear>=max)
        printf("queue is overflow\n");
    else
    {
        rear=rear+1;
        q[rear]=val;
    }
}
int ins_f(int front)
{
    if(front<=0)
        printf("queue is overflow\n");
    else
    {
        front=front-1;
        q[front]=val;
    }
}
int del_f(int front)
{
    if(front>=max)
        printf("queue is underflow/empty \n");
    else
    {
        front=front+1;
    }
}
int del_r(int rear)
{
    if(rear<=0)
        printf("queue is underflow/empty \n");
    else
    {
        rear=rear-1;
    }
}
int display(int val)
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }
}
int main()
{
    int n,ch,n1,out,exit;
    printf("Enter your choice\n 1)insert from Rear and Delete from front \n 2)insert from front and delete from rear \n 10)Display \n 11)exit \n");
    scanf("%d",&ch);
    do
    {
         switch(ch)
    {
    case 1:
        out:
        do
        {
        printf("enter your choice\n 3)insert from rear \n 4)delete from from front \n 5)move to the main menu \n");
        scanf("%d",&n);
        switch(n)
        {
        case 3:
            printf("\n enter element:\n");
            scanf("%d",&val);
            ins_r(rear);
            break;
        case 4:
            del_f(front);
            break;
        case 5:
            goto out;
            break;
        default:
            printf("enter valid choice\n");
        }
        }
        while(n!=5);
        break;

        case 2:
        exit:
        do
        {
        printf("enter your choice\n 6)insert from front\n 7)delete from rear \n 8)move to the main menu \n");
        scanf("%d",&n1);
        switch(n1)
        {
        case 6:
            printf("\n enter element:\n");
            scanf("%d",&val);
            ins_f(front);
            break;
        case 7:
            del_r(rear);
            break;
        case 8:
            goto exit;
            break;
        default:
            printf("enter valid choice\n");
        }
        }
        while(n1!=8);


        break;
        case 10:
            printf("entered elements are:\n");
            display(val);
            break;
        }
    }while(ch!=11);
}


