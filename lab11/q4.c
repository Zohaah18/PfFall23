/** programmer: Zoha Ahmed
* Date: 21 Nov, 2023
* Desc: ques 4, lab 11
/**
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    float salary;
    int hoursperday;
};

// Function to increase salary 
void increaseSalary(struct Employee *employee) {
    if (employee->hoursperday >= 12) {
        employee->salary += 150;
    } else if (employee->hoursperday >= 10) {
        employee->salary += 100;
    } else if (employee->hoursperday >= 8) {
        employee->salary += 50;
    }
}

int main() {
    // Declare an array to store information for 10 employees
    struct Employee employees[10];

    // Input employee information
    for (int i = 0; i < 10; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hoursperday);

        // Increase salary based on hours worked per day
        increaseSalary(&employees[i]);

        printf("\n");
    }

    // Print the name and final salary of all employees
    printf("Employee Details after Salary Increase:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Final Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}

