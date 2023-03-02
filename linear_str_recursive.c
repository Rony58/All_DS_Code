#include<stdio.h>

int find_char(char array[],int n,int index,char character);
int main(){

    int n;
    printf("Character array size\n");
    scanf("%d",&n);

    char array[n+1];

    printf("Give the character array elements\n");

    for(int i=0;i<n;i++){
        fflush(stdin);
        scanf("%c",&array[i]);
        fflush(stdin);
    }
    printf("Which character are you searching\n");
    char find_Character;
    scanf("%c",&find_Character);
    int index=0;

    int data=find_char(array,n,index,find_Character);
    if(data==-1){
        printf("data is not found");
    }
    else{
         printf("The index %d in character %c",data+1,find_Character);
    }
    return 0;
}

int find_char(char array[],int n,int index,char character){

        if(index<=n){
            if(array[index]==character){
                return index;
            }
            else{
                find_char(array,n,index+1,character);
            }
        }
        else{
        return -1;
        }
}