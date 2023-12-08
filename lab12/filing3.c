#include <stdio.h>
#include <stdlib.h>

#define MAX_COURSES 50

// Structure to store course information
struct Course {
    char code[20];
    char name[50];
    float gpa;
    int semester;
    int credit_hours;
};

// Function to input course information
void input_course(struct Course *course) {
    printf("Enter Course Code: ");
    scanf("%s", course->code);

    printf("Enter Course Name: ");
    scanf(" %[^\n]s", course->name);

    printf("Enter Course GPA: ");
    scanf("%f", &(course->gpa));

    printf("Enter Semester: ");
    scanf("%d", &(course->semester));

    printf("Enter Credit Hours: ");
    scanf("%d", &(course->credit_hours));
}

// Function to save course data to a file
void save_to_file(struct Course *courses, int num_courses) {
    FILE *file = fopen("transcript.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "Course Code\tCourse Name\tGPA\tSemester\tCredit Hours\n");
    for (int i = 0; i < num_courses; ++i) {
        fprintf(file, "%s\t\t%s\t\t%.2f\t%d\t\t%d\n", courses[i].code, courses[i].name,
                courses[i].gpa, courses[i].semester, courses[i].credit_hours);
    }

    fclose(file);
}

// Function to view transcript
void view_transcript(struct Course *courses, int num_courses) {
    printf("Transcript\n");
    printf("Course Code\tCourse Name\tGPA\tSemester\tCredit Hours\n");
    for (int i = 0; i < num_courses; ++i) {
        printf("%s\t\t%s\t\t%.2f\t%d\t\t%d\n", courses[i].code, courses[i].name,
               courses[i].gpa, courses[i].semester, courses[i].credit_hours);
    }
}

// Function to calculate CGPA
float calculate_cgpa(struct Course *courses, int num_courses) {
    float total_quality_points = 0.0;
    int total_credit_hours = 0;

    for (int i = 0; i < num_courses; ++i) {
        total_quality_points += courses[i].gpa * courses[i].credit_hours;
        total_credit_hours += courses[i].credit_hours;
    }

    return total_quality_points / total_credit_hours;
}

// Function to calculate SGPA
float calculate_sgpa(struct Course *courses, int num_courses, int semester) {
    float total_quality_points = 0.0;
    int total_credit_hours = 0;

    for (int i = 0; i < num_courses; ++i) {
        if (courses[i].semester == semester) {
            total_quality_points += courses[i].gpa * courses[i].credit_hours;
            total_credit_hours += courses[i].credit_hours;
        }
    }

    return total_quality_points / total_credit_hours;
}

int main() {
    struct Course courses[MAX_COURSES];
    int num_courses = 0;

    int choice;
    do {
        printf("\nMenu\n");
        printf("1. Input Course Information\n");
        printf("2. Save to File\n");
        printf("3. View Transcript\n");
        printf("4. Calculate CGPA\n");
        printf("5. Calculate SGPA\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (num_courses < MAX_COURSES) {
                    input_course(&courses[num_courses]);
                    num_courses++;
                } else {
                    printf("Maximum number of courses reached.\n");
                }
                break;
            case 2:
                save_to_file(courses, num_courses);
                printf("Data saved to transcript.txt\n");
                break;
            case 3:
                view_transcript(courses, num_courses);
                break;
            case 4:
                printf("CGPA: %.2f\n", calculate_cgpa(courses, num_courses));
                break;
            case 5:
                {
                    int semester;
                    printf("Enter semester to calculate SGPA: ");
                    scanf("%d", &semester);
                    printf("SGPA for Semester %d: %.2f\n", semester, calculate_sgpa(courses, num_courses, semester));
                }
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}
