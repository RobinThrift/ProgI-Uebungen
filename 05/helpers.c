#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"


struct Image newImage(int width, int height) {
	struct Image result;
	result.width = width;
	result.height = height;
	result.data = calloc(width * height, sizeof(uint8_t));
	return result;
}

void deleteImage(struct Image *image) {
	free(image->data);
	image->data = NULL;
	image->width = 0;
	image->height = 0;
}

// Your function implementations below this line

// IMPLEMENT ALL THE FUNCTIONS!!!

int pointToIndex(struct Image *image, int x, int y) {
    return (image->width) * x + y;
}


int isPointInRange(struct Image *image, int x, int y) {
    if (pointToIndex(image, x, y) < image->width * image->height) {
        return 1;
    } else {
        return 0;
    }
}

uint8_t getValueAt(struct Image *image, int x, int y) {
    return image->data[pointToIndex(image, x, y)];
}

void setValueAt(struct Image *image, int x, int y, uint8_t value) {
    image->data[pointToIndex(image, x, y)] = value;
}

void fillRect(struct Image *image, struct Rect *rect, uint8_t fillGrayValue) {
    int sx, sy, ex, ey, i, j;

    // start x, y
    sx = rect->leftTop.x;
    sy = rect->leftTop.y;

    // end x, y
    ex = rect->rightBottom.x;
    ey = rect->rightBottom.y;

    for (i = sx; i < ex-1; i++) {

        for (j = sy; j < ey-1; j++) {
            setValueAt(image, j, i, fillGrayValue);
        }

    }

}

void drawRect(struct Image *image, struct Rect *rect, uint8_t strokeGrayValue, int strokeWidth) {

    int sx, sy, ex, ey, hsw, i, j;

    // half stroke width
    hsw = (int) strokeWidth/2;

    // start x, y
    sx = rect->leftTop.x;
    sy = rect->leftTop.y;

    // end x, y
    ex = (rect->rightBottom.x) ? rect->rightBottom.x : hsw;
    ey = (rect->rightBottom.y) ? rect->rightBottom.y : hsw;

    // obere kante
    rect->leftTop.y = sy-hsw;
    rect->leftTop.x = sx-hsw;

    rect->rightBottom.y = sy+hsw+1;
    rect->rightBottom.x = ex+hsw+1;

    fillRect(image, rect, strokeGrayValue);     
    

    // rechte kante
    rect->leftTop.y = sy-hsw;
    rect->leftTop.x = ex-hsw;

    rect->rightBottom.y = ey+hsw+1;
    rect->rightBottom.x = ex+hsw+1;

    fillRect(image, rect, strokeGrayValue);

    // untere kante
    rect->leftTop.y = ey-hsw;
    rect->leftTop.x = sx+hsw;

    rect->rightBottom.y = ey+hsw+1;
    rect->rightBottom.x = ex+hsw+1;

    fillRect(image, rect, strokeGrayValue);

    // linke kante
    rect->leftTop.y = sy-hsw;
    rect->leftTop.x = sx-hsw;

    rect->rightBottom.y = ey+hsw+1;
    rect->rightBottom.x = sx+hsw+1;

    fillRect(image, rect, strokeGrayValue);
    
}





