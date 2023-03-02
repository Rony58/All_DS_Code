#include<stdio.h>
#include<stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

struct Node *head;

//insert First New Node
void insertFirst(int value)
{
    struct Node *newNode;
    newNode =(struct Node*) malloc(sizeof(struct Node));
    newNode->data=value;
    if(head==NULL)
    {

        newNode->next=NULL;
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}

//insert End the new node 
void insertEnd(int value)
{
    struct Node *newNode;
    newNode =(struct Node*) malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        struct Node *temp=head;
        while(temp->next!=NULL)
        {
            temp= temp->next;
        }
        temp->next=newNode;
    }
}

//insert at any position a new node

void insertAnyPosition(int value,int position)
{
    struct Node *newNode;
    newNode=(struct Node*) malloc(sizeof(struct Node));
    newNode->data=value;
    if(position==1)
    {
        newNode->next=head;
        head=newNode;
        return ;
    }
    else
    {
        struct Node *temp=head;
        for(int i=0; i<position-2; i++)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}                                                             

//traverse the data
void display()
{
    if(head==NULL)
    {
        printf("empty");
    }
    else
    {
        struct Node *temp=head;
        while (temp->next!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d \n",temp->data);
        printf("\n");
    }

}


int main()
{

    insertFirst(5);
    display();
    printf("\n");
    insertEnd(10);
    display();
    printf("\n");
    insertAnyPosition(20,2);
    display();
    printf("\n");
    insertAnyPosition(30,2);
    display();
    printf("\n");
}
