#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "bmp.h"

#define WIDTH 512
#define HEIGHT 512


uint8_t invert(uint8_t val) {
    return 255-val;
}

uint8_t brightness(uint8_t val, int mod) {
    return val + mod;
}

uint8_t contrast(uint8_t val, double mod) {
    return (val * mod > 255) ? 255 : val * mod;
}

uint8_t getPixel(uint8_t data[], unsigned int posX, unsigned int posY) {
    return data[(WIDTH) * posY + posX];
}

void setPixel(uint8_t data[], unsigned int posX, unsigned int posY, uint8_t val) {
    data[(WIDTH) * posY + posX] = val;
}

int main (void) {

    // img array
    uint8_t data[WIDTH * HEIGHT];
    int i = 0;
    int j = 0;

    uint8_t _p;

    // load the iamge
    load_image("lenaGray.bmp", WIDTH, HEIGHT, data);



    // a) helligkeit der pixel im oberen, linken quadranten
    for (i = 0; i < HEIGHT/2; i++) {

        for (j = 0; j < WIDTH/2; j++) {
            _p = getPixel(data, j, i);
            _p = brightness(_p, -44);
            setPixel(data, j, i, _p);
        }

    }

    // b) kontrast der pixel im oberen, rechtenr quadranten
    for (i = 0; i < HEIGHT/2; i++) {

        for (j = WIDTH/2 - 1; j < WIDTH; j++) {
            _p = getPixel(data, j, i);
            _p = contrast(_p, 1.5);
            setPixel(data, j, i, _p);
        }

    }


    // a) invertieren der pixel im unteren, linken quadranten
    for (i = HEIGHT/2; i < HEIGHT; i++) {

        for (j = 0; j < WIDTH/2; j++) {
            _p = getPixel(data, j, i);
            _p = invert(_p);
            setPixel(data, j, i, _p);
        }

    }

    // d) kreis mit x: 256px, y: 256px, r = 240px weiss zeichen
    for (i = 0; i < HEIGHT; i++) {

        for (j = 0; j < WIDTH; j++) {
            if (sqrt(pow(fabs(256 - i), 2) + pow(fabs(256 - j), 2)) > 240) {
                _p = getPixel(data, j, i);
                _p = 255;
                setPixel(data, j, i, _p);
            }
        }

    }

    // e) spiegeln
    for (i = 0; i < HEIGHT; i++) {

        for (j = 0; j < WIDTH/2; j++) {
            _p = getPixel(data, WIDTH-j, i);
            setPixel(data, WIDTH-j, i, getPixel(data, j, i));
            setPixel(data, j, i, _p);
        }

    }


    save_image("LenaGrey_edited.bmp", WIDTH, HEIGHT, data);

    return 0;
}