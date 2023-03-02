//its a final linked list where we can insert data first and last
#include<stdio.h>
#include<stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

struct Node *head;

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

//insert End
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

//insert at any position

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

//display
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

    int choice,value,target,position;

    while(1)
    {
mainmenu :
        printf("1---insert \n2---display \n0-----exits \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("insert value\n");
            scanf("%d",&value);

            while(1)
            {
                printf("1---insertFirst \n2---insertEnd \n3--insertAnyPosition \n");
                scanf("%d",&target);
                switch(target)
                {
                case 1 :
                    insertFirst(value);
                    goto mainmenu;
                    break;

                case 2 :
                    insertEnd(value);
                    goto mainmenu;
                    break;

                case 3 :
                printf("please select the position where you can insert the element\n");
                    scanf("%d",&position);
                    insertAnyPosition(value,position);
                    goto mainmenu;
                    break;
                default :
                    goto mainmenu;
                }
            }
        case 2 :
            display();
            break;
        case 0 :
            exit(0);
        }
    }

}
