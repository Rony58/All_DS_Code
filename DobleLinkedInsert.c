
#include<stdio.h>

struct Node {
    int data;
    struct Node *next,*previous;
};

struct Node *head;

void insertFirst(int value) {
    struct Node *newNode;
    newNode =(struct Node*) malloc(sizeof(struct Node));

    newNode->data=value;

    newNode->previous=NULL;
    if(head==NULL){
        newNode->next=NULL;
        head=newNode;
    }
    else {
        newNode->next=head;
        head=newNode;
    }

}
void insetEnd(int value){
    struct Node *newNode;
    newNode =(struct Node*) malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL) {
        newNode->previous=NULL;
        head=newNode;
    }
    else {
        struct Node *temp=head;
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
        temp->previous=temp;
    }

}

void display(){

struct Node *temp=head;

 while (temp->next!=NULL){
      printf("%d ",temp->data);
     temp=temp->next;
 }
 printf("%d ",temp->data);

}


int main() {

  insertFirst(60);
    insertFirst(70);
      insertFirst(80);
      insetEnd(100);
  display();
}
