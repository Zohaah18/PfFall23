#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_word_file(const char *file_path, const char *content) {
    FILE *file = fopen(file_path, "wb");
    if (file == NULL) {
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }

    // Write content to the file
    fwrite(content, sizeof(char), strlen(content), file);

    fclose(file);
}

int compare_files(const char *file_path1, const char *file_path2) {
    FILE *file1 = fopen(file_path1, "rb");
    FILE *file2 = fopen(file_path2, "rb");

    if (file1 == NULL || file2 == NULL) {
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }

    int is_equal = 1;
    int char1, char2;

    // Compare file contents character by character
    while ((char1 = fgetc(file1)) != EOF && (char2 = fgetc(file2)) != EOF) {
        if (char1 != char2) {
            is_equal = 0;
            break;
        }
    }

    // Check if both files have the same length
    if (fgetc(file1) != EOF || fgetc(file2) != EOF) {
        is_equal = 0;
    }

    fclose(file1);
    fclose(file2);

    return is_equal;
}

int main() {
    const char *file_path1 = "file1.docx";
    const char *file_path2 = "file2.docx";
    const char *content = "This is a test.";

    // Create two Word files with the same content
    create_word_file(file_path1, content);
    create_word_file(file_path2, content);

    // Compare the contents of the two files
    if (compare_files(file_path1, file_path2)) {
        printf("The two files are equal.\n");
    } else {
        printf("The two files are not equal.\n");
    }

    return 0;
}
