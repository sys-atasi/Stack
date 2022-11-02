#include<stdio.h>
#include<stdlib.h>
#define N 10
int stack[N];
int top=-1;
void push(int x)
{
    printf("Enter the Elements:");
    scanf("%d",&x);
    if(top==N-1)
    {
       printf("Overflow");
    }
    else
    {
        top=top+1;
        stack[top]=x;
    }
}
void pop()
{
   int item;
   if(top<0)
   {
    printf("Underflow");
   }
   else
   {
    item=stack[top];
    top=top-1;
    printf("Popped item is %d\n",item);
   }
}
void display()
{
    if(top<0)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Stack Elements\n");
        for(int i=top;i>=0;i--)
        {
           printf("%d\n",stack[i]);
        }

    }
}
int main()
{
    int item,ch;
    while(1)
    {
        printf("***MENU***\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push(item);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }

        }

    }
}
