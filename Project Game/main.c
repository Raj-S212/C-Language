//We will write a program that generates a random number and asks the player to guess it. If the player's guess is higher than the actual number, the program displays "Lower number please". Similarly, if the user's guess is too low, the program prints "Higher number please".
//When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
//Hint: Use loop & use a random number generator.
 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
   // printf("Random number between 1 and 100: %d\n", randomNumber);
   
   do{
    printf("Guess the number");
    scanf("%d",& guessed); 
    if(guessed>randomNumber){
        printf("lower number please!\n");
    }
        else if(guessed<randomNumber){
            printf("Higher number please!\n");
    }
    else{
        printf("Guess the number!\n");
    }
    no_of_guesses++;

   }while(guessed!=randomNumber);
   printf("You guessed the number in %d guesses",no_of_guesses);
    return 0;
}

/*
This program is a number guessing game. Here's how it works:

1. The program starts by including necessary header files: stdio.h for input/output operations, stdlib.h for random number generation, and time.h for seeding the random number generator.

2. In the main function:
   - It seeds the random number generator using the current time to ensure different random numbers each time the program runs.
   - It generates a random number between 1 and 100 using rand() % 100 + 1.
   - It initializes variables for the number of guesses and the user's guess.

3. The main game loop:
   - It uses a do-while loop to repeatedly ask the user for guesses until they guess correctly.
   - In each iteration:
     - It prompts the user to guess the number.
     - It reads the user's guess using scanf().
     - It compares the guess with the random number:
       - If the guess is higher, it prints "lower number please!"
       - If the guess is lower, it prints "Higher number please!"
       - If the guess is correct, it prints "Guess the number!" (Note: This message is incorrect and should be changed)
     - It increments the guess count.

4. Once the correct number is guessed, the loop ends, and the program prints the total number of guesses it took.

5. The program then returns 0 to indicate successful execution.

Note: There's a small bug in the program. When the user guesses correctly, it still prints "Guess the number!" instead of a congratulatory message. This should be fixed for better user experience.
*/