#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"
#include "bmp.h"

void saveImg(struct Image *image, char location[]) {
    save_image(location, image->width, image->height, image->data);
}

int main(void) {

    // setup the test image
    struct Image img = newImage(512, 512);

    struct Rect r;

    struct Point lt, rb;

    lt.x = 40;
    lt.y = 10;

    rb.x = 290;
    rb.y = 160;

    r.leftTop = lt;
    r.rightBottom = rb;


    // a)
    printf("%d\n", pointToIndex(&img, 4, 5));

    // b)
    printf("%d\n", isPointInRange(&img, 510, 210));

    // c)
    printf("%d\n", getValueAt(&img, 512, 210));


    // e)
    // fillRect(&img, &r, 100);


    drawRect(&img, &r, 100, 4);

    saveImg(&img, "test.bmp");

    return 0;
}