#include <stdio.h>

int main()
 {
    char string[100];
   
    int i = 0;

    printf("Enter a string: ");
   
    scanf("%s", string);

    while(string[i] != '\0')
     {
        i++;
    }

    printf("Length = %d", i);

    return 0;
}