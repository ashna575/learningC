#include<stdio.h>

int main(){
    FILE *a;
    a=fopen("odd.txt","w");
    for (int i = 0; i < 10; i++)
    {
        if(i%2!=0){
            fprintf(a,"%d",i);
        }
    }
    fclose(a);
    return 0;
    
    }
