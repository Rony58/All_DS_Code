//

#include<stdio.h>
int find_character(char array[],int beg,int end,char character);

int main(){
    printf("character size\n");
    int n;
    scanf("%d",&n);
    char array[n+1];

    printf("input character elements\n");
    for(int i=0;i<n;i++){
        fflush(stdin);
        scanf("%c",&array[i]);
        fflush(stdin);
    }

    printf("find the character\n");
    char character;
    scanf("%c",&character);
    int beg=0;
    int end=n-1;

    int data=find_character(array,beg,end,character);

    printf("%d\n",data);

    if(data!=-1){
        printf("the index no %d of character %c",data,character);
    }
    else{
        printf("character not found");
    }
    return 0;

}


int find_character(char array[],int beg,int end,char character){
    while(beg<=end){
        int mid=(beg+end)/2;
        if(array[mid]==character){
            return mid+1;
        }
        else if(array[mid]<character){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }   
    return -1;
}