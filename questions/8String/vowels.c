#include<string.h>
#include<stdio.h>
 int vowel(char arr[]);

int main(){
char a[100];
scanf("%s",a);
printf("%d",vowel(a));

}
int vowel(char arr[] ){
   int count=0;
   for(int i =0;arr[i]!='\0';i++){
    if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u' ){
        count++;
    }
   }return count;

}