#include <stdio.h>
#include <math.h>


float cuberoot(float x) {

    float r;

    // nach: http://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Exponential_identity
    r = exp((1.0/3.0) * log(x));

    return r;
}

int main(void) {
    float r = cuberoot(125);
    printf("cuberoot: %f\n", r);
    return 0;
}