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


    // OUTPUT
    printf("<html><body><table><thead><tr><th>Buchstabe</th><th>Anzahl</th></tr></thead><tbody>");

    for (i = 65; i < 90; i++) {
        printf("<tr><td>%c</td><td>%d</td></tr>", i, nLetters[j]);
        j++;
    }

    printf("</tbody></table></body></html>");

}