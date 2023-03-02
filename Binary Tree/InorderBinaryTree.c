#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left,*right;
};

/*
a function to create new node;
*/
struct Node *newNode(int item){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}


void in_order(struct Node *root){
    if(root!=NULL){
        in_order(root->left);
        printf("%d \n",root->data);
        in_order(root->right);
    }
}

/*
A fuction to insert a new node with
given data
*/
struct Node* insert(struct Node *node,int data){
    if(node==NULL){
        return newNode(data);
    }
    if(data<node->data){
        node->left=insert(node->left,data);
    }
    else if (data>node->data){
        node->right=insert(node->right,data);
    }
    return node;
}

int main(){
    struct Node *root=NULL;
   root= insert(root,50);
   insert(root,30);
   insert(root,20);
   insert(root,40);
   insert(root,70);
   insert(root,60);
   insert(root,80);
   in_order(root);
}