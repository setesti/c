#include <stdio.h>
#define CM_PER_KG 166

//Computes the dimensional weight of
// a box from input provided by the user

int main(){
    int height, length, width, volume, weight;

    printf("Enter height of box (cm): ");
    scanf("%d", &height);
    printf("Enter length of box (cm): ");
    scanf("%d", &length);
    printf("Enter width of box (cm): ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + CM_PER_KG - 1) / CM_PER_KG;

    printf("Volume (cubic centimeters): %d\n", volume);
    printf("Dimensional weight (kg): %d\n", weight);

    return 0;
}