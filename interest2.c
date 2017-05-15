#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main()
    {
        int i, low_rate, num_years, year, num_months, month;
        double value[6];

        printf("Enter interest rate: ");
        scanf("%d", &low_rate);
        printf("Enter number of years: ");
        scanf("%d", &num_years);

        printf("\nMonths");
        for (i = 0; i < NUM_RATES; i++)
            {
                printf("%6d%%", low_rate + i);
                value[i] = INITIAL_BALANCE;
            }
        printf("\n");
        num_months = num_years * 12;
        month = year * 12;
        for (month = 1; month <= num_months; month++)
            {
                printf("%3d    ", month);
                for (i = 0; i < NUM_RATES; i++)
                    {
                        value[i] += (low_rate + i) / 100.0 * value[i];
                        printf("%7.2f", value[i]);
                    }
                printf("\n");                
            }
        return 0;
    }