//its a final linked list where we can insert any position 

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;

void insertAnyPosition(int value,int position){
    struct Node *newNode;
    newNode=(struct Node*) malloc(sizeof(struct Node));
    newNode->data=value;
    if(position==1){
        newNode->next=head;
        head=newNode;
        return ;
    }
    else{
        struct Node *temp=head;
        for(int i=0;i<position-2;i++){
        temp=temp->next;
         }
      newNode->next=temp->next;
      temp->next=newNode;
    }
}

void display(){
    struct Node *temp;
    temp=head;
    if(head==NULL){
        printf("its empty");
    }
    else{
        while(temp->next!=NULL){
             printf("%d  ",temp->data);
             temp=temp->next;
        }
        printf("%d",temp->data);
    }
}

int main(){
insertAnyPosition(4,1);
insertAnyPosition(5,2);
insertAnyPosition(8,1);
insertAnyPosition(10,3);
display();
return 0;
}
