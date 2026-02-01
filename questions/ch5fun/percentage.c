#include <stdio.h>

float perc(int eng, int math, int hin);

int main() {
    int a, b, c;

    printf("Enter marks of English: ");
    scanf("%d", &a);

    printf("Enter marks of Math: ");
    scanf("%d", &b);

    printf("Enter marks of Hindi: ");
    scanf("%d", &c);

    printf("Percentage = %.2f", perc(a, b, c));
    return 0;
}

float perc(int eng, int math, int hin) {
    return ((eng + math + hin) / 300.0) * 100;
}
