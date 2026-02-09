#include<stdio.h>

int main(){
    FILE *fptr;
     fptr= fopen("test.txt","r");
//                filename,Mode
char ch;
for(int i=1;i<=5;i++){
    fscanf(fptr,"%c",&ch);
printf("character = %c\n",ch);
}
fclose(fptr);
    return 0;
}