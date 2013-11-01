#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void decToBin(char inNum[]) {

    int i = 0;
    char newNum[101];

    long num = strtol(inNum, NULL, 10);

    int curr = num;

    int r = 0;

    printf("%s\n", newNum);

    return;

    while (curr != 0) {
        r = curr % 2;
        curr = (r) ? (curr - 1) / 2 : curr / 2;

        newNum[i] = (r) ? '1' : '0';

        i++;
    }


    printf("%s\n", newNum);

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
        // printf("%d: %c, %f\n", i, num[i], exp2(i));
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

    // printf("\n%s, %s\n", num, base);

    if (!strcmp(base, "10")) {
        decToBin(num);
    } else if (!strcmp(base, "2")) {
        binToDec(num);
    }


    return 0;
}
