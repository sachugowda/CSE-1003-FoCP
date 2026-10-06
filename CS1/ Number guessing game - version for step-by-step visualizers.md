/* Number guessing game - version for step-by-step visualizers  
   (Python Tutor and similar). No time.h and no keyboard input:  
   the secret number and the guesses are fixed, so every step can be traced. */  
#include <stdio.h>  
  
int main(void) {  
    int secret = 37;                      /* fixed instead of rand() */  
    int guesses[] = {50, 25, 37};         /* replaces scanf input */  
    int tries = 0;  
    int guess;  
  
    printf("I'm thinking of a number between 1 and 100.\n");  
  
    do {  
        guess = guesses[tries];  
        printf("Your guess: %d\n", guess);  
        tries++;  
  
        if (guess > secret)  
            printf("Too high!\n");  
        else if (guess < secret)  
            printf("Too low!\n");  
        else  
            printf("You got it in %d tries!\n", tries);  
    } while (guess != secret);  
  
    return 0;  
}  
