#include <stdio.h>

/*print Fahrenheit-Celsius table
    for fahr = 0,, 20, ..., 300 */
float main()
{
    float fahr, celsius;
    float lower,upper,step;

    lower = 0; /*lower limit of temp. scales */
    upper = 300; /*upper limit of temp. scales */
    step = 20; /* step size */

    fahr = lower;
    printf("Fahrenheit-Celsius Table\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%7.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
/*another workaround*/
/*#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
int fahr;
for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}*/