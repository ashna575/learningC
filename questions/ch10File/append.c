#include<stdio.h>

int main(){

    FILE *a;
    a=fopen("tst.txt","a");
    fprintf(a,"%c",'M');
    fprintf(a,"%c",'a');
    fprintf(a,"%c",'n');
    fprintf(a,"%c",'g');
    fprintf(a,"%c",'o');

    fclose(a);
    return 0;
}