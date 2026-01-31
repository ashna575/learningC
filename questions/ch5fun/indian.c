#include<stdio.h>
void Indian();
void frence();


int main(){
    
char ch ;
printf("enter i or f ");
scanf("%c",&ch);
if(ch =='i'){
    Indian();
}
else
{
    frence();
}
    return 0;
}

void Indian(){
    printf("namaste");
    
}
void frence(){
    printf("bonjour");
}
