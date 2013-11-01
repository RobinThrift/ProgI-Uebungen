#include <stdio.h>
#include <string.h>

float kgToLbs(float weight) {
    return weight * 2.20462;
}

float lbsToKg(float weight) {
    return weight * 0.453592;
}


float calcBMI(float weight, int height) {
    float h = (float) height/100;
    return weight / (h*h);
}


int main (void) {

    char name[30];
    float weight = 0.0;
    float weightLbs = 0.0;
    float weightKg = 0.0;
    char unit[4]; 
    int height;
    const float avrg = 25.7;
    float bmi;

    printf("Bitte geben Sie ihren Name ein: ");
    scanf("%s", name);
    
    printf("Bitte geben Sie ihr Gewicht ein: ");
    scanf("%f", &weight);

    printf("Bitte geben Sie die Einheit ihres Gewichts (kg/lbs) ein: ");
    scanf("%s", unit);

    printf("Bitte geben Sie ihre Größe in cm ein: ");
    scanf("%d", &height);

    if (!strcmp(unit, "kg")) {
        printf("%s\n", unit);
        weightKg = weight;
        weightLbs = kgToLbs(weightKg);
    } else if (!strcmp(unit, "lbs")) {
        weightLbs = weight;
        weightKg = lbsToKg(weightLbs);
    }

    bmi = calcBMI(weightKg, height<<1);

    if (bmi > avrg) {
        printf("Sie liegen mit einem BMI von %f über dem deutschen Durchschnitt (%f)\n", bmi, avrg);
    } else {
        printf("Sie liegen mit einem BMI von %.4f unter dem deutschen Durchschnitt (%.1f)\n", bmi, avrg);
    }
    

    return 0;
}

