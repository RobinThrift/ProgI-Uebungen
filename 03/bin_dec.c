#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void decToBin(char inNum[]) {

    int i = 0;
    char newNum[64];
    char realBin[64];

    long num = strtol(inNum, NULL, 10);

    long curr = num;

    int r = 0;

    int length = 0;

    while (curr != 0) {
        r = curr % 2;
        curr = (r) ? (curr - 1) / 2 : curr / 2;

        newNum[i] = (r) ? '1' : '0';

        i++;
    }

    i = 0;

    while (strcmp(&newNum[i], "\0")) {
        length++;
        i++;
    }

    i = length - 1;

    while (i > -1) {
        realBin[length - i - 1] = newNum[i];
        i--;
    }


    printf("%s\n", realBin);

}

void binToDec(char num[]) {

    int i = 0;
    int sum = 0;
    int length = 0;

    while (i < 65 && strcmp(&num[i], "\0")) {
        length++;
        i++;
    }

    i = 0;

    while (i < length) {
        sum += (num[i] == '1') ? exp2(i) : 0;
        i++;
    }

    printf("%s im System 2 entspricht %d im System 10.\n", num, sum);
}


int main(void) {

    char num[65];
    char base[3];

    printf("Bitte geben Sie eine Zahl und Basis ein:\n");
    printf("(Enter um umzuwandeln)\n");
    scanf("%s %s", num, base);


    if (!strcmp(base, "10")) {
        decToBin(num);
    } else if (!strcmp(base, "2")) {
        binToDec(num);
    }


    return 0;
}
