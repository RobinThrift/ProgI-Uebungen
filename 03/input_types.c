#include <stdio.h>
#include <string.h>

float kgToLbs(float weight) {
    return weight * 2.20462;
}

float lbsToKg(float weight) {
    return weight * 0.453592;
}


int main (void) {

    char name[30];
    float weight = 0.0;
    float weightLbs = 0.0;
    float weightKg = 0.0;
    char unit[4]; 
    int height;

    printf("Bitte geben Sie ihren Name ein: ");
    scanf("%s", name);
    
    printf("Bitte geben Sie ihr Gewicht ein: ");
    scanf("%f", &weight);

    printf("Bitte geben Sie die Einheit ihres Gewichts (kg/lbs) ein: ");
    scanf("%s", unit);

    printf("Bitte geben Sie ijre Größe in cm ein: ");
    scanf("%d", &height);

    if (!strcmp(unit, "kg")) {
        printf("%s\n", unit);
        weightKg = weight;
        weightLbs = kgToLbs(weightKg);
    } else if (!strcmp(unit, "lbs")) {
        weightLbs = weight;
        weightKg = lbsToKg(weightLbs);
    }

    printf("Gewicht: \n \t%fkg \n\t%f\n", weightKg, weightLbs);

    return 0;
}

