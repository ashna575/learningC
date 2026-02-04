#include<stdio.h>
#include<string.h>

int main(){
// char a[]="ashna";
// char b[]="surya";
// strcat(a,b);
char a[]="ashnaa";
char b[]="surya";
strcpy(a,b);
puts(a);
char c[]="ashnaa";
char d[]="surya";
printf("%d",strcmp(d,c));
    return 0;
}