// #include<stdio.h>
// void printHello(); //declaration
// void printGoodbye();
// int main(){
//     printGoodbye();
//     printHello(); //functionc call
//     return 0;
// }

// void printHello(){
//     printf("hello");

// }
// void printGoodbye(){
//     printf("goodbye \n");
    
// }



#include<stdio.h>
//REcurrsion
void printHL(int count);

int main(){
  printHL(6);
  return 0;
}

void printHL(int count){
 if(count == 0){
    return;
 }
printf("helloWorld \n");
printHL(count-1);
}