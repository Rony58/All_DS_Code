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
void pre_order(struct Node *root){
    if(root!=NULL){
        printf("%d \n",root->data);
        in_order(root->left);
        in_order(root->right);
    }
}
void post_order(struct Node *root){
    if(root!=NULL){
        in_order(root->left);
        in_order(root->right);
        printf("%d \n",root->data);
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
   int n;
   struct Node *root=NULL;
   root= insert(root,50);
   insert(root,30);
   insert(root,20);

   insert(root,40);
   insert(root,70);
   
   insert(root,60);
   insert(root,80);
   printf("please select printf order\n1-- in order\n2-- in pre Order\n3-- post order\n");
   scanf("%d",&n);
   switch (n)
   {
   case 1:
   in_order(root);
   break;

   case 2:
   pre_order(root);
   break;

   case 3:
   post_order(root);
   break;
   }
}