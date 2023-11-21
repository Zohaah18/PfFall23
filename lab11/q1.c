#include <stdio.h>
#include <string.h>

struct Student {
    int rollnum;
    char name[50];
    char department[50];
    char course[20];
    int yearofjoining;
};

struct College {
    struct Student students[450];
    int numstudents;
};

void addStudent(struct College *college, int rollnum, const char *name, const char *department, const char *course, int yearofjoining) {
    if (college->numstudents < 450) {
        struct Student newStudent;
        newStudent.rollnum = rollnum;
        strncpy(newStudent.name, name, sizeof(newStudent.name));
        strncpy(newStudent.department, department, sizeof(newStudent.department));
        strncpy(newStudent.course, course, sizeof(newStudent.course));
        newStudent.yearofjoining = yearofjoining;

        college->students[college->numstudents] = newStudent;
        college->numstudents++;
    } else {
        printf("Maximum number of students reached. Cannot add more students.\n");
    }
}
void printStudentsByYear(struct College *college, int year) {
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < college->numstudents; i++) {
        if (college->students[i].yearofjoining == year) {
            printf("%s\n", college->students[i].name);
        }
    }
}

void printStudentByRollNumber(struct College *college, int rollnum) {
    for (int i = 0; i < college->numstudents; i++) {
        if (college->students[i].rollnum == rollnum) {
            printf("Student with Roll Number %d:\n", rollnum);
            printf("Name: %s\n", college->students[i].name);
            printf("Department: %s\n", college->students[i].department);
            printf("Course: %s\n", college->students[i].course);
            printf("Year of Joining: %d\n", college->students[i].yearofjoining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", rollnum);
}

int main() {
    struct College college;
    college.numstudents = 0;

    // Adding students
    addStudent(&college, 101, "John Doe", "Computer Science", "B.Tech", 2020);
    addStudent(&college, 102, "Jane Smith", "Electrical Engineering", "B.E", 2021);
    addStudent(&college, 103, "Bob Johnson", "Mechanical Engineering", "B.E", 2020);

    // Print names of all students who joined in a particular year
    int year_to_search = 2020;
    printStudentsByYear(&college, year_to_search);

    // Print the data of a student whose roll number is given
    int roll_number_to_search = 102;
    printStudentByRollNumber(&college, roll_number_to_search);

    return 0;
}

