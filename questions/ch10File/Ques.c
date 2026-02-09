#include<stdio.h>
int main(){
    FILE *b;
    int j;
    b=fopen("int.txt","r");
     for(int i=1;i<=5;i++){
        fscanf(b,"%d",&j);
        printf("%d\n",j);
    
     }
     fclose(b);
    return 0;
}