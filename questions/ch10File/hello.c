#include<stdio.h>  //to check weather file exixt or not

int main(){
    FILE *fptr;   //filename ,mode
     fptr= fopen("tst.txt","r");
if(fptr==NULL){
    printf("file doesnt exist");
}else{
fclose(fptr);}


    return 0;
}