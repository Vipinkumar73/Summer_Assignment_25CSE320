#include <stdio.h>

struct Employee
 {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i, n;

    printf("Enter number of employees  ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
     {
        printf("Enter details of Employee %d", i + 1);

        printf("Employee ID  ");
        
        scanf("%d", &emp[i].id);

        printf("Employee Name  ");
      
        scanf("%s", emp[i].name);

        printf("Salary  ");
       
        scanf("%f", &emp[i].salary);
    }

    
    printf("Employee Records ");

    for(i = 0; i < n; i++) {
        printf("Employee %d", i + 1);
       
        printf("ID: %d", emp[i].id);
      
        printf("Name: %s", emp[i].name);
       
        printf("Salary: %.2f", emp[i].salary);
    }

    return 0;
}
