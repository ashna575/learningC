#include<stdio.h>
 
int  fact(int n);

int main(){
  int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("factorial of  %d  number = %d", n, fact(n));
    return 0;
    
}


int fact(int n){
    if (n==1){
        return 1;}
        else{
        return  n*(fact(n-1));
}}