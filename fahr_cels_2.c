#include <stdio.h>

#define FREEZE_PT 32.0f
#define SCALE_FACT (5.0f/9.0f)
#define KEL_ZERO 273.15f

int main(){
    float fahr, cels, kel;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahr);

    cels = (fahr - FREEZE_PT) * SCALE_FACT;
    kel = cels + KEL_ZERO;
    printf("Celisus equivalent temperature: %25.1f\n", cels);
    printf("Kelvin absolute temperature: %28.2f\n", kel);

    return 0;
}
