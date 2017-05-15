#include <allheads.h>

/*print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300 */
 int main()
{
    float fahr, celsius;
    float lower,upper,step;

    lower = 0; /*lower limit of temp. scales */
    upper = 300; /*upper limit of temp. scales */
    step = 20; /* step size */

    celsius = lower;
    printf("Celsius-Fahrenheit Table\n");
    while (celsius <= upper) {
        fahr = (5.0/9.0) * (celsius+32.0);
        printf("%5.0f %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}