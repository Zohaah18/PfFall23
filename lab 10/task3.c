/** programmer: Zoha Ahmed
* Date: 14 Nov, 2023
* Desc: task 3, lab 10
/**
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to fill a 2D array with consecutive prime numbers
void Primes(int **arr, int rows, int cols) {
    int current = 2;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            while (!isPrime(current)) {
                ++current;
            }

            // Fill the array with the prime number
            arr[i][j] = current;
            ++current;
        }
    }
}

// Function to print a 2D array
void printArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Get the dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Dynamically allocate memory for the 2D array
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    Primes(arr, rows, cols);
    printf("\n2D Array filled with consecutive prime numbers:\n");
    printArray(arr, rows, cols);

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
