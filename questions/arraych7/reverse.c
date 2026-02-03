#include<stdio.h>

void reversearr(int arr[],int n);
void printNo(int arr[],int n);
int main(){

int arr[]={1,2,3,4,5,6,7,8,9,10};
 reversearr(arr,10);
 printNo(arr,10);


    return 0;
}
void reversearr(int arr[],int n){
    int first , second ;
    for (int i=0;i<n/2;i++)
    {
       first= arr[i];
       second=arr[n-i-1];
       arr[i]=second;
       arr[n-1-i]=first;
    } ;
}

void printNo(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  \t",arr[i]);
    }
}