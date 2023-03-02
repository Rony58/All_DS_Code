#include<stdio.h>

   int SIZE;
   int array[100];
   int front=-1;
   int rear=-1;


// enqueue
void enqueue(){
    int x;
    printf("Give the data\n");
    scanf("%d",&x);
    if((rear+1)%SIZE==front){
        printf("queue is full");
        return;
    }
    else if (front==-1 && rear==-1){
        front=rear=0;
    }
    else{
        rear=(rear+1)%SIZE;
    }
    array[rear]=x;
  }

  //deque
 void deque(){
    if(front==-1 && rear==-1){
        return;
    }
    if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%SIZE;
    }
  }

// display 
  void display()
{
    if(front==rear)
    {
        printf("empty\n");
    }
    else
    {
        printf("The elements in STACK \n");
        for(int i=front; i<=rear; i++)
        printf("\n%d",array[i]); 
    }
   
}

 int main(){

    int choice;

    printf("array size \n");
    scanf("%d",&SIZE);
    printf(" 1.enqueue\n 2.deque\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                deque();
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

