#include<stdio.h>
int main(){
    char ch;
    printf("enter charachter");
    scanf("%c",&ch);
    if(ch >='A'&& ch<='Z'){
        printf("uppercase");

    }
    else{
        printf("lowe case");
    }

    return 0;
}