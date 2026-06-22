#include <stdio.h>

int main()
 {
    char string[100];
   
    int i, len = 0;

    printf("Enter a string: ");
  
    scanf("%s", string);

    while(string[len] != '\0')
   
    len++;

    printf("Reversed String = ");

    for(i = len - 1; i >= 0; i--)
   
    printf("%c", string[i]);

    return 0;
}