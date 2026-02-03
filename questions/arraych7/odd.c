#include<stdio.h>

int countOdd(int arr[],int n);

int main(){

int arr[]={1,23,7,5,6,7,8,90,3,43};
 int a=(countOdd(arr,10));

printf("%d ",a);
    return 0;
}

int countOdd(int arr[],int n){
    int count=0;
    for (int i=0;i<n;i++)
    {
        if(arr[i]%2!=0){
            count++;
        }
    } return count;
}