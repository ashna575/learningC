#include<stdio.h>
#include<string.h>
 

void salt(char a[]);

int main(){
   char a[100];
   fgets(a,100,stdin);
 a[strcspn(a, "\n")] = '\0'; // remove newline from fgets salt(a); return 0; }
   salt(a);
   return 0;
}


void salt(char a[]){
    char b[]="123";
    char c[200];
    strcpy(c,a);
    strcat(c,b);
    printf("%s\n",c);

}