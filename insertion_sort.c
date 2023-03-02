#include<stdio.h>


int main(){
    int value,hole;
    int array[5]={5,10,15,7,1};
    for(int i=1;i<=5;i++){
        value=array[i];
        hole=i;
        while(hole>0 && array[hole-1]>value){
            array[hole]=array[hole-1];
            hole=hole-1;
        }
        array[hole]=value;
    }

    for(int i=0;i<5;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}