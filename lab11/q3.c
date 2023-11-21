#include <stdio.h>

// Define a structure for storing date information
struct Date {
    int day;
    int month;
    int year;
};

int DatesEqual(struct Date date1, struct Date date2) {
    return (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year);
}

int main() {
    struct Date date1, date2;

    // Input for the first date
    printf("Enter the first date (dd mm yy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input for the second date
    printf("Enter the second date (dd mm yy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the two dates
    if (DatesEqual(date1, date2)) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}
