#include <stdio.h>

struct Student 
{
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s[5];
    int i, n;

    printf("Enter number of students  ");
 
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d", i + 1);

        printf("Roll Number  ");
      
        scanf("%d", &s[i].roll);

        printf("Name  ");
      
        scanf("%s", s[i].name);

        printf("Marks  ");
      
        scanf("%f", &s[i].marks);
    }


    printf("\nStudent Records:");

    for(i = 0; i < n; i++) {
  
        printf("\nStudent %d", i + 1);

        printf("Roll Number: %d", s[i].roll);

        printf("Name: %s", s[i].name);
       
        printf("Marks: %.2f", s[i].marks);
    }

    return 0;
}