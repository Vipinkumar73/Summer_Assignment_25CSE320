#include <stdio.h>

int main()
 {
    char str[100];
   
    int i, l = 0, flag = 1;

    printf("Enter a string: ");
  
    scanf("%s", str);

    while (str[l] != '\0')
     {
   
        l++;
    }

    for (i = 0; i < l / 2; i++) {
        if(str[i] != str[l - 1 - i])
         {
           
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}