#include<stdio.h>

void gst(float a );



int main(){
    
float a;
printf("enter the value:  \n");
scanf("%f",&a);
 gst(a);

    return 0;
}

void gst( float a){
a=a+(0.18*a);

    printf("%f",a);
  }
