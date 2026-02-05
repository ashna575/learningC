#include<stdio.h>
#include<string.h>

struct address 
{
  int houseno;
  int block;
  char city[100];
  char state[100];
};

void print(struct address a);

int main(){
    struct address a[5];
    printf("enter add of person 1");
  

     for(int i=0;i<4;i++){
        printf("\nEnter address of person %d\n", i+1);

        printf("House No: ");
        scanf("%d", &a[i].houseno);

        printf("Block: ");
        scanf("%d", &a[i].block);

        printf("City: ");
        scanf("%s", a[i].city);

        printf("State: ");
        scanf("%s", a[i].state);
    }

   print(a[0]);
   print(a[1]);
   print(a[2]);
   print(a[3]);
    
}

void print(struct  address a){
    printf("Adress of %d %d %s %s\n",a.block, a.houseno, a.city ,a.state);
}