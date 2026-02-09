#include<stdio.h>

int main(){
    FILE *m;
    int i;
    int b;
    m=fopen("int.txt","r");
      fscanf(m,"%d",&i);
      int a=i;
  fscanf(m,"%d",&b);
int j=b;

  
    fclose(m);


  m=  fopen("int.txt","w");
    fprintf(m,"%d",a+j);
    fclose(m);
    return 0;
    
    }