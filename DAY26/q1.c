#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, count = 0;

  
    srand(time(0));
   
    number = rand() % 100 + 1;

    printf("Guess a number between 1 and 100\n");

    while (guess != number)
    {
        printf("Enter your guess ");
       
        scanf("%d", &guess);

        count++;

        if (guess > number)
      
        printf("Too High\n");
     
        else if (guess < number)
       
        printf("Too Low\n");
     
        else
          
        printf("Correct! You guessed in %d attempts.\n", count);
    }

    return 0;
}