#include <stdio.h>

int main(){

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        sum1, sum2, check;

    printf("\n-------UPC check number calculator--------\n");
    printf("\nEnter the first (single) digit: ");
    scanf("%d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the last (single) digit: ");
    scanf("%1d", &check_digit);

    sum1 = d + i2 + i4 + j1 + j3 + j5;
    sum2 = i1 + i3 + i5 + j2 + j4;
    check = 3 * sum1 + sum2;

    printf("Check digit: %d\n", 9 - ((check - 1) % 10));

    if (check_digit == 9 - ((check - 1) % 10))
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}