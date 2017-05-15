#include <stdio.h> <stdlib.h> <time.h>

#define MAX_NUM 100

int secret_num;

//Prototypes

void initialize_num_generator();
//void choose_new_secret_num();
int new_secret_num();
void read_guess(int secret_num);

int main()
{
    char command;
    int secret_num;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUM);
    initialize_num_generator();
    do
    {
        secret_num = new_secret_num();
        //choose_new_secret_num();
        printf("A new number has been chosen.\n");
        read_guess(secret_num);
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y'); 
    return 0;
}

/**************************************************************
 * initialize_num_generator: Initializes the random           *
 *                           number generator using           *
 *                           the time of day.                 *
 **************************************************************/
 void initialize_num_generator()
 {
     srand((unsigned) time(NULL));
 }

/**************************************************************
 * new_secret_number: Randomly selects a number               *
 *                           between 1 and MAX_NUM and        *
 *                           stores it in secret_num.         *
 **************************************************************/

 int new_secret_num()
 {
     return rand() % MAX_NUM + 1;
 }

 /**************************************************************
 * read_guess: Repeatedly reads user guesses and tells         *
 *             the user whether each guess is too low,         *
 *             high or correct, prints the total number        *
 *             of guesses and returns                          *
 ***************************************************************/

 void read_guess(int secret_num)
 {
     int guess, num_guesses = 0;

     for (;;)
     {
         num_guesses++;
         printf("Enter guess: ");
         scanf("%d", &guess);
         if (guess == secret_num)
         {
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
         }
         else if (guess < secret_num)
            printf("Too low, try again.\n");
         else printf("Too high, try again.\n");
     }
 }