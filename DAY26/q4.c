#include <stdio.h>

int main()
{
    int ans;
    int score = 0;

    printf("Quiz Game ");

   
    printf("\nQ1. 2 + 2 = ?\n");
  
    printf("1. 3\n2. 4\n3. 5\n");
   
    printf("Enter answer: ");
   
    scanf("%d", &ans);

    if (ans == 2)
      
    score++;

    printf("\nQ2. Capital of India?\n");
   
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
  
    printf("Enter answer: ");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nYour Score = %d", score);

    return 0;
}