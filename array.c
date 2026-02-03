#include<stdio.h>

void printNo(int arr[],int n);


int main(){

    int arr[]={1,2,3,45,66};
    printNo(arr,5);
    ;

    return 0;
}

void printNo(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  \t",arr[i]);
    }
}