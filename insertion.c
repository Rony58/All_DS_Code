/*
insert:starting,middle,end

*/

#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};
    struct Node *head; //it notes first element of the linked list 

void insertStart(int x)
{
    struct Node *new_node =(struct Node*) malloc(sizeof(struct Node));

    new_node->data=x;
    new_node->next=head;
    head=new_node;

}
void insertEnd(int x)
{
    struct Node *new_node =(struct Node *) malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next=NULL;
    //when lined is empty
    if(head==NULL){
        head=new_node;
        return;
    }

    struct Node *last =head;
    while(last->next!=NULL)
    {
     last =last->next;
    }
    last->next=new_node;
}
// 3 4 5 6 
// 3 4 2 5 6 
void insertMiddle(struct Node *prev,int x)
{
    struct Node *new_node =(struct Node*) malloc(sizeof(struct Node));

    new_node->data=x;
    new_node->next=prev->next;
    prev->next=new_node;

}

void print(){
    struct Node *p=head;
    while(p!=NULL)
    {
    printf("%d ",p->data);
    p=p->next;
    }
    printf("\n");
}
   
int main(){

    insertEnd(1);
    print();
    insertEnd(3);
    print();
    insertStart(2);
    print();
    insertMiddle(head,9);
    print();

}


 By clicking "DONATE" I accept Go Fight Win <a href="https://maga.com/tearms-condition/">terms of use</a> and <a href="https://maga.com/privacy-policy/">privacy policy</a>