#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j,temp;
int array[n];
int min;


for (int i=0;i<n;i++) {
    scanf("%d",&array[i]);
}

for(i=0;i<n-1;i++){

    min =i;
    for(j=i+1;j<n;j++) {
        if(array[j]<array[min]){
            min=j;
        }
    }
        if(min!=i){
            temp=array[i];
            array[i]=array[min];
            array[min]=temp;
        }
}

for (int i=0;i<n;i++) {
    printf("%d\n",array[i]);
}
 return 0;
}