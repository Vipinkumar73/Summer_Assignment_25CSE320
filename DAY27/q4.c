#include <stdio.h>

int main()
 {
    int roll, m1, m2, m3, total;
    float percentage;
    char name[20];

    printf("Enter Name  ");
   
    scanf("%s", name);

    printf("Enter Roll Number  ");
    
    scanf("%d", &roll);

    printf("Enter Marks of 3 Subjects  ");
  
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n  Marksheet \n");
   
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
   
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}