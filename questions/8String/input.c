#include<stdio.h>
int lenght(char arr[]);
int main(){
    char firstname[100];
    fgets(firstname,100,stdin);
   int a=lenght(firstname);

    printf("%d",a);
 return 0;

}

int lenght(char arr[]){
    int count=0;
for(int i=0; arr[i]!='\0';i++){
   count++;
   
}
return(count-1);
printf("\n");
}