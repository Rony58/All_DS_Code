#include <stdio.h>

void search(int array[],int n);

int main(void) {
    
    

    int n;
    printf("give the size\n");
    scanf("%d",&n);


    int array[n];
    int i=0;
     printf("give the array\n");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    search(array,n);
    return 0;

}

void search(int array[],int n) {
    int find;
    printf("give the find\n");
    scanf("%d",&find);
    int i;
    for(i=0;i<n;i++){
        if(array[i]==find){
            printf("found at %d\n",i+1);
            break;
        }
    }
    if(i==n){
        printf("this is not found");
    }
}