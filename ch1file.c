#include<stdio.h>

int main(){
    FILE *fptr;
     fptr= fopen("test.txt","r");
//                filename,Mode
fclose(fptr);
    return 0;
}