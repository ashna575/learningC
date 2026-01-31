#include<stdio.h>
void printHello(); //declaration
void printGoodbye();
int main(){
    printGoodbye();
    printHello(); //functionc call
    return 0;
}

void printHello(){
    printf("hello");

}
void printGoodbye(){
    printf("goodbye \n");
    
}