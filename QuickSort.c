#include<stdio.h>

void partition(int array[],int beg,int end);

int main()
{
    int n;
    printf("Please input the array length\n");
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int beg=0;
    int end=n-1;
    partition(array,beg,end);

    for(int i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;

}
//2,11,5,9,45
void partition(int array[],int beg,int end){

int temp;


if(beg<end) {

    int pivot=beg;
    int left=beg;
    int right=end;


   while(left<right) {


    while(array[pivot]<=array[right] && pivot !=right) {
        right =right-1;
    }
    if(array[pivot]>array[right]) {

    temp=array[pivot];
    array[pivot]=array[right];
    array[right]=temp;
    pivot=right;
    }


    while(array[pivot]>=array[left] && pivot !=left) {
         left=left+1;
    }

    if(array[left]>array[pivot]) {
    temp=array[pivot];
    array[pivot]=array[left];
    array[left]=temp;
    pivot=left;

    }
}

partition(array,beg,pivot-1);
partition(array,pivot+1,end);


}


}