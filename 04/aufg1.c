#include <stdio.h>
#include <stdint.h>



uint64_t factorial (unsigned int x) {

    uint64_t fact = 0;
    int i;

    if (x != 0) {
        fact = 1;
        for (i = 1; i <= x; i++) {
            fact *= i;
        }

    }

    return fact;
}


int main(void) {

    int i = 0;


    for (i = 0; i <= 20; i++) {
        printf("%d! = %llu\n", i, factorial(i));
    }

    return 0;
}
