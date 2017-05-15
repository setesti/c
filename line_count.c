#include <stdio.h>

 int main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n') /* '' means integer value == numerical value of character in machine's character set*/
            ++nl;
    printf("%d\n", nl);
}
/* tab count*/
/* main()
{
    int c, tab;

    tab = 0;
    while ((c = getchar()) != EOF)
        if (c == '\t')
            ++tab;
    printf("%d\n", tab);
}

/* blank and newline count*/
/* main()
{
    int c, nl, bl;

    nl = 0;
    bl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        if (c == '\b')
            ++bl;
    printf("%d\t%d\n", nl, bl);
}