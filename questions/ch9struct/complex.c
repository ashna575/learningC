// #include<stdio.h>
// #include<string.h>

// struct complex
// {
//   int real;
//   int img;
  
// };


// void print(struct  complex v1,struct vector v2,struct vector sum);

// int main(){
//     struct complex c={5,8};
//     struct complex *ptr=&c;
//     printf("%d",ptr->real);
//     printf("%d",ptr->img);
//       return 0; 
//     }


// void print(struct  complex v1,struct vector v2,struct vector sum){
//   sum.x=v1.x+v2.x;
//   sum.y=v1.y+v2.y;
//   printf("%d\n",sum.x);
//   prinf("%d\n",sum.y);
// }

#include<stdio.h>

struct complex {
    int real;
    int img;
};

void print(struct complex v1, struct complex v2, struct complex sum);

int main() {
    struct complex c1 = {5, 8};
    struct complex c2 = {2, 3};
    struct complex sum;

    struct complex *ptr = &c1;
    printf("Real: %d\n", ptr->real);
    printf("Imaginary: %d\n", ptr->img);

    print(c1, c2, sum);
    return 0;
}

void print(struct complex v1, struct complex v2, struct complex sum) {
    sum.real = v1.real + v2.real;
    sum.img  = v1.img  + v2.img;

    printf("Sum real = %d\n", sum.real);
    printf("Sum img  = %d\n", sum.img);
}
