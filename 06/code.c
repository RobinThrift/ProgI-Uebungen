#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>



void initCells(void) {

    int i, j;
    struct Cell *c;

    for (i = 0; i < ROWS; i++) {

        for (j = 0; i < COLUMNS; j++) {
            c = newCell();
            c->row = i;
            c->column = j;
            cells[i][j] = c;
        }

    }

}


struct TranslationList *newTranslationList(void) {
    struct TranslationList *result = calloc(1, sizeof(struct TranslationList));
    return result;
}




void insert(struct TranslationList *list, char *german, char *english)  {

    struct TranslationNode *n = calloc(1, sizeof(struct TranslationNode));

    n->german = strdup(german);
    n->english = strdup(english);

    n->next = list->nodes;

    list->nodes = n;

}


void getTime(char *out) {

    time_t t = time(NULL);
    struct tm *lt = localtime(&t);


    strftime(out, sizeof &out + 2, "%d.%m.%Y", lt);

    // return tStr;
    return;

}


char *translate(struct TranslationList *list, char *german) {
    struct TranslationNode *n;

    char today[] = "TODAY";
    char timeOut[80];

    // check for TODAY input first
    if (strcmp(today, german) == 0) {
        getTime(timeOut);
        german = strdup(timeOut);
        return german;
    }

    for (n = list->nodes; n != NULL; n = n->next) {
        if (strcmp(n->german, german) == 0) {
            return n->english;
        }
    }

    return NULL;
}


void processInput(char *input, int row, int column, struct TranslationList *list) {

    // print recieved input
    printf("input recieved %s (%d, %d)\n", input, row, column);

    char *output = translate(list, input);

    if (output != NULL) {
        guiSetOutput(output, row, column);
    }
}


int importTranslations(struct TranslationList *list) {

    char ger[128], en[128];
    FILE *f;
    char cc;

    // first open the file
    if ((f = fopen("de-en-mod.txt", "r")) == NULL) {
        printf("ERROR while trying to open de-en-mod.txt! Aborting.\n");
        return 1;
    }

    while(fscanf(f, "%s\t%s", ger, en) != EOF) {
        insert(list, ger, en);
    }

    fclose(f);
}
