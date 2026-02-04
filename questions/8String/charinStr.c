#include<string.h>
#include<stdio.h>
 void vowel(char arr[],char n);

int main(){
char a[100];
scanf("%s",a);
vowel(a,'h');

}void vowel(char arr[], char n) {
    int found = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == n) {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("yes");
    else
        printf("no");
}