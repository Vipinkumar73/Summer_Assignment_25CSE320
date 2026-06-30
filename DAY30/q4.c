#include <stdio.h>

int roll[10], marks[10], n;
char name[10][30];


void addStudent()
 {
    int i;
    printf("Enter number of students  ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
     {
        printf("\nEnter Roll Number ");
       
        scanf("%d", &roll[i]);

        printf("Enter Name  ");
       
        scanf("%s", name[i]);

        printf("Enter Marks  ");
      
        scanf("%d", &marks[i]);
    }
}


void displayStudent()
 {
    int i;

    printf("\nStudent Records\n");
  
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++)
     {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

int main()
 {
    int choice;

    while(1)
     {
      
        printf(" Student Management System ");
      
        printf("1. Add Students\n ");
       
        printf("2. Display Students\n");
      
        printf("3. Exit\n");

        printf("Enter your choicen\n");
       
        scanf("%d", &choice);

        switch(choice)
         {
            case 1:
              
            addStudent();
                break;

            case 2:
              
            displayStudent();
                break;

            case 3:
              
            printf("Program End");
                return 0;

            default:
             
            printf("Invalid Choice");
        }
    }
}