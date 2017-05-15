#include <stdio.h>

int main()
    {
        int i, n;

        printf("Enter a number of entries in table: ");
        scanf("%d", &n);

        i = 1;
        while (i <= n)
            {
                printf("%15d%15d\n", i, i * i);
                i++;
                if (i > 1000)
                    {
                        return 0;
                    }
            }
        
        return 0;
    }