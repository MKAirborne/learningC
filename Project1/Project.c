#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    // Print the random number
    // printf("Random Number: %d\n", randomNumber);

    int no_of_guesses = 0;
    int guessed_num;

    do
    {
        printf("Guess the number: \n");
        scanf("%d", &guessed_num);
        if (guessed_num > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed_num < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!\n");
        }
        no_of_guesses++;
    } while (guessed_num != randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}

/*
Step-by-Step Explanation

-->Header Files Inclusion
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h> — Provides functions like printf() for displaying output.
#include <stdlib.h> — Provides the rand() and srand() functions for random number generation.
#include <time.h> — Provides the time() function, which is used to seed the random number generator.

-->Main Function
int main() {
The main() function is the starting point of the program.

--> Seeding the Random Number Generator
srand(time(0));
time(0) — Returns the current time in seconds.
srand() — Seeds the random number generator using the current time. This ensures that each run generates different random numbers.

--> Generating a Random Number
int randomNumber = (rand() % 100) + 1;
rand() — Generates a pseudo-random integer.
rand() % 100 — Produces a number in the range 0 to 99.
+ 1 — Shifts the range to 1 to 100 (the desired range).

-->Displaying the Random Number
printf("Random number between 1 and 100: %d\n", randomNumber);
Prints the generated random number on the screen.

-->Program End
return 0;
This indicates successful completion of the program.

--> Sample Output
Random number between 1 and 100: 57

Every time you run the program, you'll likely get a different random number because of srand(time(0)).
*/