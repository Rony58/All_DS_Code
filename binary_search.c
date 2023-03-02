#include <stdio.h>

int main() {

    int n;
    printf("give the size\n");
    scanf("%d",&n);


    int array[n];
    int i=0;
     printf("give the array\n");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int find;
    printf("give the find\n");
    scanf("%d",&find);

    int beg=0,mid;
    int end=n-1;


    while(beg<=end) {

        mid=(beg+end)/2;
        if(array[mid]==find) {
            printf("data is found");
            return 0;
        }
        else if ( array[mid]<find) {
            beg=mid+1;
        }
        else {

            end=mid-1;
        }

    }
    printf("data is not found");

    return 0;

}