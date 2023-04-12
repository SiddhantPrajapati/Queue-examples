#include<stdio.h>
#define max 5
int insert();
int del();
int display();
int rear,front,q[max],val,i,j;
int insert()
{
    int i,j;
    rear=rear+1;
    check();
}
int check()
{
    for(i=0;i<=rear;i++)
    {
        if(val>q[i])
        {
            for(j=rear+1;j>i;j--)
            {
                q[j]=q[j-1];
            }
        }
    }
    q[i]=val;
}
int del()
{
    front=front+1;
}
int display()
{
    int i;
    for(i=front+1;i<=rear;i++)
        printf("%d\n",q[i]);
}
int main()
{
    int ch,n,loop,i,a;
    do
    {
        printf("\n Enter your choice\n 1)insert\n 2)delete \n 3)display \n 4)exit \n");
        scanf("%d",&ch);
        if(ch>4)
        {
            printf("\n enter valid choice");
        }
        else
        {
            switch(ch)
            {
                case 1:
                    if(rear>=max)
                    {
                        printf("\nqueie is full\n");
                    }
                    printf("\n Enter the number of elements that you want to insert \n");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        printf("\nEnter element:");
                        scanf("%d",&val);
                        insert();
                    }
                    break;
                case 2 :
                     if(front<=-1)
                    {
                        printf("\nqueie is empty");
                    }
                    else
                    {
                        del();
                    }
                    break;

                case 3:
                    if(front<=-1)
                    {
                        printf("\nqueie is empty");
                    }
                    else
                    {
                        printf("\nElement of queie:\n");
                        display();
                    }
                    break;
            }
        }
    }
    while(ch!=4);
}
