#include <stdio.h>

int main(void) {

    double num = 0;

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%lf", &num);

    printf("%f + 3 = %f\n", num, num+3);


    return 0;
}