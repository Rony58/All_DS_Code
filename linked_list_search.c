
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

//data handling




//insert a element
void insertAnyPosition(int value,int position){
    struct Node *newNode;
    newNode=(struct Node*) malloc(sizeof(struct Node));

    newNode->data=value;
    if (position==1){
        newNode->next=head;
        head=newNode;
        return ;
    }
    else {
        struct Node *temp=head;
        for(int i =0;i<position-2;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }

}


void dataHandling(){
    int n;
    printf("How many times you can insert data\n");
    scanf("%d",&n);
    for(int i =1; i<=n;i++){
        int data ,position;
        printf("give us the data and then position\n");
        scanf("%d %d",&data ,&position);
        insertAnyPosition(data,position);
    }
}

//search 

void search(){
    int value;
    printf("search the value\n");
    scanf("%d",&value);
    struct Node *temp=head;
    int count=1;
    while(temp->next!=NULL){
        if(temp->data==value){
            printf("data is found %d in place of %d\n",temp->data,count);
            return;
        }
        temp=temp->next;
        count++;
    }
    //last node check
     if(temp->data==value){
            printf("data is found %d in place of %d \n",temp->data,count);
     }
     else{
        printf("data is not found");
     }
}


//display
void display()
{
    if(head==NULL){
        printf("Data is empty\n");
        return;
    }

        struct Node *temp=head;
        while (temp->next!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
        printf("%d \n",temp->data);

}
int main(){
   int choose;
    while(1){
    int choose;
mainMenu:
    printf("1--for insert any position\n2--for search\n3--for display\n0--for exit\n");
    scanf("%d",&choose);
    switch(choose){
        case 1 :
        dataHandling();
        goto mainMenu;
        case 2 : 
        search();
        goto mainMenu;
        case 3 :
        display();
        goto mainMenu;
        case 0 : 
        exit(0);
        default :
        printf("wrong choose ,TRY IT AGAIN !!");
    }
    }

}