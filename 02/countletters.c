#include <stdio.h>

int main(void) {

    int nLetters[25];
    int i = 0;
    int j = 0;

    for (i = 0; i < 25; i++) {
        nLetters[i] = 0;
    }


    while ((i = getchar()) != EOF) {

        if (i >= 'a' && i <= 'z') {
            i -= 32;
        }

        if ((i >= 'A' && i <= 'Z')) {
            nLetters[i - 'A']++;
        }
    }

    for (i = 65; i < 90; i++) {
        printf("%c: %d\n", i, nLetters[j]);
        j++;
    }

}