#include<stdio.h>
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
    int i;
    for(i=0;i<n;i++){
        if(array[i]==find_Character){
            printf("The index %d in character %c",(i+1),array[i]);
            break;
        }
    }
    if(n==i){
        printf("Character not found");
    }

    return 0;
}