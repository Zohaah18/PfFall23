/** programmer: Zoha Ahmed
* Date: 14 Nov, 2023
* Desc: task 5, lab 10
/**

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 800
#define N 800

// Function to multiply and divide each element in a 2D array
void processArray(int **array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = (array[i][j] * 3) / 2;
        }
    }
}

// Function to allocate a 2D array with a single malloc call
int** ArrayMalloc(int rows, int cols) {
    int **array = (int **)malloc(rows * sizeof(int *) + rows * cols * sizeof(int));
    if (!array) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; ++i) {
        array[i] = (int *)(array + rows) + i * cols;
    }

    return array;
}

// Function to allocate a 2D array with multiple malloc calls
int** ArrayMultipleMalloc(int rows, int cols) {
    int **array = (int **)malloc(rows * sizeof(int *));
    if (!array) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; ++i) {
        array[i] = (int *)malloc(cols * sizeof(int));
        if (!array[i]) {
            perror("Memory allocation error");
            exit(EXIT_FAILURE);
        }
    }

    return array;
}

// Function to deallocate a 2D array
void deallocate2DArray(int **array, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(array[i]);
    }
    free(array);
}

int main() {
    clock_t start, end;
    double timeused;

    // Array dimensions
    int dimensions[][2] = {{100, 100}, {500, 500}, {800, 800}};

    for (int k = 0; k < sizeof(dimensions) / sizeof(dimensions[0]); ++k) {
        int rows = dimensions[k][0];
        int cols = dimensions[k][1];

        // Allocate array with a single malloc call
        start = clock();
        int **arrayMalloc = ArrayMalloc(rows, cols);
        end = clock();
        timeused = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Time taken to allocate %dx%d array with a single malloc call: %f seconds\n", rows, cols, timeused);

        // Allocate array with multiple malloc calls
        start = clock();
        int **arrayMultipleMalloc = ArrayMultipleMalloc(rows, cols);
        end = clock();
        timeused = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Time taken to allocate %dx%d array with multiple malloc calls: %f seconds\n", rows, cols, timeused);

        // Process array and measure time
        start = clock();
        processArray(arrayMalloc, rows, cols);
        end = clock();
        timeused = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Time taken to process %dx%d array with a single malloc call: %f seconds\n", rows, cols, timeused);

        start = clock();
        processArray(arrayMultipleMalloc, rows, cols);
        end = clock();
        timeused = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Time taken to process %dx%d array with multiple malloc calls: %f seconds\n", rows, cols, timeused);

        // Deallocate memory
        deallocate2DArray(arrayMalloc, rows);
        deallocate2DArray(arrayMultipleMalloc, rows);

        printf("\n");
    }

    return 0;
}

