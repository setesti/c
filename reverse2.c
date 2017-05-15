#include <stdio.h>

int main()
    {
        int N, i;

        printf("How many numbers do you want to reverse? ");
        scanf("%d", &N);

        int a[N];

        printf("Enter %d numbers: ", N);
        for (i = 0; i < N; i++)
            scanf("%d", &a[i]);
        
        printf("In reverse order: ");
        for (i = N - 1; i >= 0; i--)
            printf(" %d", a[i]);
        printf("\n");

        return 0;
    }