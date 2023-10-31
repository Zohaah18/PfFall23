/**
* programmer:Zoha Ahmed
* Desc: question 8 Assignment 2
* Date: 31 October,2023
*
*/

#include <stdio.h>
 
int calculate_persistence(int num) {
    int persistence = 0;
    
    while (num >= 10) {
        int product = 1;
        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }
        num = product;
        persistence++;
    }
    
    return persistence;
}

int main() {
    int n;
    
    while (1) {
        printf("Enter a positive integer (or EOF to exit): ");
        int result = scanf("%d", &n);
        printf("-----------------------\n");
        if (result == EOF) {
            break; 
        } else if (result == 0 || n < 1) {
            printf("Invalid input. Please enter a positive integer.\n");
            printf("-----------------------------\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        int persistence = calculate_persistence(n);
        printf("Persistence of %d is %d\n", n, persistence);
        printf("---------------------------\n");
    }
    
    printf("Program ends.\n");
    printf("------------------\n");
    return 0;
    
} // end main 
