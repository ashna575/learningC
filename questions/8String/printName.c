#include<stdio.h>

void printNAme(char arr[]);
int main(){
    char firstname[]="Ashna";
    char secondNAme[]="Raikwar";
    printNAme(firstname);
    printNAme(secondNAme);
 return 0;

}

void printNAme(char arr[]){
for(int i=0; arr[i]!='\0';i++){
    printf("%c",arr[i]);
}
printf("\n");
}