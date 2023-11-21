/** programmer: Zoha Ahmed
* Date: 21 Nov, 2023
* Desc: ques 5, lab 11
/**
#include <stdio.h>

struct Employee {
    int employee_id;
    char name[50];
    float salary;
};

struct Organization {
    char organisation_name[50];
    char organisation_number[20];
    struct Employee emp;
};

int main() {
    struct Organization org;
    org.emp.employee_id = 232555;
    snprintf(org.emp.name, sizeof(org.emp.name), "Linus Sebastian");
    org.emp.salary = 4000.0f;

    snprintf(org.organisation_name, sizeof(org.organisation_name), "NU-Fast");
    snprintf(org.organisation_number, sizeof(org.organisation_number), "NUFAST123ABC");

    // Output the requested information
    printf("The size of structure organisation: %lu\n", sizeof(struct Organization));
    printf("Organisation Name: %s\n", org.organisation_name);
    printf("Organisation Number: %s\n", org.organisation_number);
    printf("Employee id: %d\n", org.emp.employee_id);
    printf("Employee name: %s\n", org.emp.name);
    printf("Employee Salary: %.2f\n", org.emp.salary);

    return 0;
}

