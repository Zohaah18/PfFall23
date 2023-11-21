/** programmer: Zoha Ahmed
* Date: 21 Nov, 2023
* Desc: ques 6, lab 11
/**
#include <stdio.h>

// Define a structure for storing date information
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
int LeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return LeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to add days to a date
void addDays(struct Date *date, int daysToAdd) {
    while (daysToAdd > 0) {
        int daysInCurrentMonth = daysInMonth(date->month, date->year);
        if (daysToAdd >= daysInCurrentMonth - date->day + 1) {
            // Move to the next month
            daysToAdd -= daysInCurrentMonth - date->day + 1;
            date->day = 1;
            if (date->month == 12) {
                date->month = 1;
                date->year++;
            } else {
                date->month++;
            }
        } else {
            // Add remaining days to the current month
            date->day += daysToAdd;
            daysToAdd = 0;
        }
    }
}

int main() {
    // Get the current date
    struct Date currentDate;
    printf("Enter the current date (dd mm yy): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    // Add 45 days to the current date
    addDays(&currentDate, 45);

    // Display the final date
    printf("Final date after adding 45 days: %02d-%02d-%04d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}

