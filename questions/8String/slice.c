#include<string.h>
#include<stdio.h>
 void slice(char arr[],int m ,int n);

int main(){
char a[100];
scanf("%s",a);
slice(a,3,6);
    return 0;

}
void slice(char arr[],int m ,int n ){
    char b[200];
    int j=0;

    for(int i=m;i<=n;i++,j++){
        b[j]=arr[i];

    } b[j] = '\0';   // important
    printf("%s",b);
}