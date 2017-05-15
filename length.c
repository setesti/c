#include <stdio.h>

int main()
    {
        int len = 0;

        printf("Enter the message: ");
        while (getchar() != '\n')
            len++;
        printf("Your message was %d character(s) long.\n", len);

        return 0;
    }

//int main()
//    {
//        char ch;
//        int len = 0;
//
//        printf("Enter the message: ");
//        ch = getchar();
//        while (ch != '\n')
//            {
//                len++;
//                ch = getchar();
//            }
//        printf("Your message was %d character(s) long.\n", len);
//
//        return 0;
//    }

