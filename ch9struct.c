#include <stdio.h>
#include <string.h>

struct student

{
    int roll;
    int marks;
    char name[100];
};

int main()
{

    struct student s1;
    s1.roll = 123;
    s1.marks = 95;
    strcpy(s1.name, "ashna");

    printf("student name = %s \n ", s1.name);
    printf("student roll = %d \n ", s1.roll);
    printf("student marks = %d \n ", s1.marks);

    struct student s2;
    s2.marks = 98;
    s2.roll = 124;
    strcpy(s2.name, "surya");
    struct student  *ptr=&s2;
    printf("student name = %s \n ", s2.name);
    printf("student roll = %d \n ", (*ptr).roll);
    printf("student marks = %d \n ", ptr->marks);
    

    struct student s3={90,123,"mousam"};
    // s3.marks = 90;
    // s3.roll = 125;
    // strcpy(s3.name, "mousam");

    printf("student name = %s \n ", s3.name);
    printf("student roll = %d \n ", s3.roll);
    printf("student marks = %d \n ", s3.marks);
    return 0;
}