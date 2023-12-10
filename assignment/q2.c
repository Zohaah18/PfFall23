#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for an employee
struct Employee {
    char name[20];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
};

// Define the structure for a department
struct Department {
    char name[20];
    struct Employee employees[5];
    int totalCommunication;
    int totalTeamwork;
    int totalCreativity;
};

// Function to initialize employee attributes randomly
void initializeEmployee(struct Employee *employee) {
    // Generate random values for communication, teamwork, and creativity
    employee->communication = rand() % 100 + 1;
    employee->teamwork = rand() % 100 + 1;
    employee->creativity = rand() % 100 + 1;
}

// Function to initialize a department
void initializeDepartment(struct Department *department, char *departmentName, char *roles[]) {
    strcpy(department->name, departmentName);
    department->totalCommunication = 0;
    department->totalTeamwork = 0;
    department->totalCreativity = 0;

    // Shuffle roles randomly
    for (int i = 0; i < 5; ++i) {
        int j = rand() % 5;
        // Swap roles[i] and roles[j]
        char *temp = roles[i];
        roles[i] = roles[j];
        roles[j] = temp;

        // Initialize employee attributes
        strcpy(department->employees[i].name, ""); // Initialize name to an empty string
        strcpy(department->employees[i].role, roles[i]);
        initializeEmployee(&(department
