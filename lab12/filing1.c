#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLUMNS 100
#define MAX_COLUMN_WIDTH 50

void read_and_display_csv(const char *file_path) {
    FILE *file = fopen(file_path, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[MAX_COLUMNS * MAX_COLUMN_WIDTH];
    char *token;

    // Read header
    fgets(line, sizeof(line), file);
    printf("%s", line);

    // Print a blank line after the header
    printf("\n");

    // Count columns in the header
    int num_columns = 0;
    token = strtok(line, ",");
    while (token != NULL && num_columns < MAX_COLUMNS) {
        num_columns++;
        token = strtok(NULL, ",");
    }

    // Initialize counters
    int num_rows = 0;

    // Read and print data
    while (fgets(line, sizeof(line), file) != NULL) {
        num_rows++;
        printf("%s", line);
    }

    // Print total rows and columns
    printf("\nTotal Rows: %d\n", num_rows);
    printf("Total Columns: %d\n", num_columns);

    fclose(file);
}

int main() {
    // Replace "your_file.csv" with the actual path to your CSV file
    const char *file_path = "your_file.csv";
    
    read_and_display_csv(file_path);

    return 0;
}
