#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50], temp[100];

    printf("Enter first string");
  
    scanf("%s", s1);

    printf("Enter second string");
  
    scanf("%s", s2);

    strcpy(temp, s1);
  
    strcat(temp, s1);

    if (strstr(temp, s2))
     
    printf("Rotation String");
   
    else
       
    printf("Not Rotation String");

    return 0;
}