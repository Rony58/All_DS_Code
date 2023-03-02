#include<stdio.h>
int stack[100],choice,n,top,x,i;

void push()
{
    if(top>=n-1)
    {
        printf("overflow\n");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("under flow\n");
    }
    else
    {
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("The elements in STACK \n");
        for(i=top; i>=0; i--)
        printf("\n%d",stack[i]);
    }
    else
    {
        printf("empty\n");
    }
   
}

int main()
{
    top=-1;
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
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
                printf("EXIT\n");
                break;
            }
            default:
            {
                printf ("wrong\n");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
