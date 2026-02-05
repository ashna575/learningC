#include<stdio.h>
#include<string.h>


struct name {
char name[100];
int age;
int marks ;
};

void print(struct name n);
int main(){
    struct name n={ "ashna",21,99
    };

   print(n);
    
}


void print(struct name n){
printf("%s\n",n.name);
printf("%d\n",n.age);
printf("%d",n.marks);
}

