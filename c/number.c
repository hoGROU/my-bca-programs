#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;
    
    printf("Guess the number (1-100)!\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < secret)
            printf("Too low!\n");
        else if (guess > secret)
            printf("Too high!\n");
        else
            printf("Correct! You got it in %d attempts!\n", attempts);
            
    } while (guess != secret);
    
    return 0;
}