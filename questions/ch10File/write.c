#include<stdio.h>  //using write mode file auto made


int main(){
    FILE *fptr;   //filename ,mode
     fptr= fopen("tst.txt","w");
if(fptr==NULL){
    printf("file doesnt exist");
}else{
fclose(fptr);}


    return 0;
}