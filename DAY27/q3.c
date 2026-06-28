#include <stdio.h>

struct Employee
 {
    int id;
    char name[20];
    float basicSalary, bonus, totalSalary;
};

int main() {
    struct Employee emp[5];
    int i, n;

    printf("Enter number of employees  ");
   
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) 
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID  ");
       
        scanf("%d", &emp[i].id);

        printf("Employee Name  ");

        scanf("%s", emp[i].name);

        printf("Basic Salary  ");
      
        scanf("%f", &emp[i].basicSalary);

        printf("Bonus  ");
        
        scanf("%f", &emp[i].bonus);

        
        emp[i].totalSalary = emp[i].basicSalary + emp[i].bonus;
    }

    printf("\nSalary Details ");

    for(i = 0; i < n; i++) 
    {
      
        printf("\nEmployee %d\n", i + 1);
      
        printf("ID: %d\n", emp[i].id);
      
        printf("Name: %s\n", emp[i].name);
      
        printf("Basic Salary: %.2f\n", emp[i].basicSalary);
      
        printf("Bonus: %.2f\n", emp[i].bonus);
      
        printf("Total Salary: %.2f\n", emp[i].totalSalary);
    }

    return 0;
}