// #include<stdio.h>
//  void storetable(int arr[][10] ,int n, int m,int num);

//  int main(){
//     int tables[2][10];
//     storetable(tables,0,10,2);
//     storetable(tables,0,10,3);
//      for(int j=0;j<10;j++){
//              printf("%d\t",tables[0][j]);
//         }

//          for(int j=1;j<10;j++){
//                           printf("%d\t",tables[1][j]);
//         }
//         printf("\n");
//     return 0;
//  }

//  void storetable(int arr[][10],int n, int m,int num){
    
//         for(int j=0;j<m;j++){
//               arr[n][j]=num*(j+1);
//         }
//     }
 

#include<stdio.h>

void storetable(int arr[][10], int n, int m, int num);

int main(){
    int tables[2][10];

    storetable(tables, 0, 10, 2);  // row 0 → table of 2
    storetable(tables, 1, 10, 3);  // row 1 → table of 3

    for(int j=0; j<10; j++){
        printf("%d\t", tables[0][j]);
    }
    printf("\n");

    for(int j=0; j<10; j++){
        printf("%d\t", tables[1][j]);
    }
    printf("\n");

    return 0;
}

void storetable(int arr[][10], int n, int m, int num){
    for(int j=0; j<m; j++){
        arr[n][j] = num * (j+1);
    }
}
