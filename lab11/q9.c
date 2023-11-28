#include <stdio.h>

// Struct definition for Register
struct Register {
    int CourseId;
    char CourseName[50];
};

// Struct definition for Student
struct Student {
    int StudentId;
    char FirstName[50];
    char LastName[50];
    long long cellno;  
    char email[50];
    struct Register registration;  
};

int main() {
    // Declaring array
    struct Student std[5];

    // Input for 5 students
    int i;
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &std[i].StudentId);

        printf("First Name: ");
        scanf("%s", std[i].FirstName);

        printf("Last Name: ");
        scanf("%s", std[i].LastName);

        printf("Cell Number: ");
        scanf("%lld", &std[i].cellno);

        printf("Email: ");
        scanf("%s", std[i].email);

        printf("Course ID: ");
        scanf("%d", &std[i].registration.CourseId);

        printf("Course Name: ");
        scanf("%s", std[i].registration.CourseName);
    }

    // Print details for 5 students
    printf("\nDetails of 5 Students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Student ID: %d\n", std[i].StudentId);
        printf("Name: %s %s\n", std[i].FirstName, std[i].LastName);
        printf("Cell Number: %lld\n", std[i].cellno);
        printf("Email: %s\n", std[i].email);
        printf("Course ID: %d\n", std[i].registration.CourseId);
        printf("Course Name: %s\n", std[i].registration.CourseName);
    }

    return 0;
}

