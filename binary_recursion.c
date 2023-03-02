#include <stdio.h>

int binary(int n,int array[],int beg,int end,int mid,int find);

int main() {

    int n;
    printf("give the size\n");
    scanf("%d",&n);
    int array[n];
    int i=0;
    //take input array elements from the client
     printf("give the array\n");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //searching element
    int find;
    printf("give the find\n");
    scanf("%d",&find);

    int beg=0,mid;
    int end=n-1;

   int data=binary(n,array,beg,end,mid,find);


    if(data!=-1){
        printf("data is found %d",data);
    }
    else{
         printf("data is not found");
    }
    return 0;

}
//binary search function
int binary(int n,int array[],int beg,int end,int mid,int find){
   //condition check to find the elements
    if(beg<=end){
        mid=(beg+end)/2;
        if(array[mid]==find){
        return mid+1;
        }
        //if find element is greater than middle elements 
        //should be changed beginning  elements
        else if(array[mid]<find){
            beg=mid+1;
            return binary(n,array,beg,end,mid,find);
        }
           //if find element is less than middle elements 
        //should be changed ending  elements
        else{
            end=mid-1;
            return binary(n,array,beg,end,mid,find);
        }
    }
    return -1;
}