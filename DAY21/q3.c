#include <stdio.h>

int main()
 {
    char string[100];
    int i = 0, v = 0, c = 0;

    printf("Enter a string: ");
   
    scanf("%s", string);

    while(string[i] != '\0') {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||
           string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
            v++;
        else
            c++;

        i++;
    }

    printf("Vowels = %d\n", v);
  
    printf("Consonants = %d", c);

    return 0;
}