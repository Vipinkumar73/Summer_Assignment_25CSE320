#include <stdio.h>

int main()
{
    char str[100], longest[100];
   
    int i, len = 0, max = 0;

    printf("Enter words (end with .) ");

    while (scanf("%s", str) == 1)
    {
        len = 0;

        for(i = 0; str[i] != '\0' && str[i] != '.'; i++)
        {
            len++;
        }

        if(len > max)
        {
            max = len;

            for(i = 0; str[i] != 0 && str[i] != '.'; i++)
            
            longest[i] = str[i];

            longest[i] = 0;
        }

        if(str[i] == '.')
    
        break;
    }

    printf("Longest word = %s", longest);

    return 0;
}