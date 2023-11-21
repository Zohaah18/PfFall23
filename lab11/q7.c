/** programmer: Zoha Ahmed
* Date: 21 Nov, 2023
* Desc: ques 7, lab 11
/**
#include <stdio.h>
#include <string.h>
// Define a structure for storing book information
struct Book {
    int accession_num;
    char author[50];
    char title[100];
    int issued; 
};

// Function to display book information
void displayBook(struct Book book) {
    printf("Accession Number: %d\n", book.accession_num);
    printf("Author: %s\n", book.author);
    printf("Title: %s\n", book.title);
    printf("Issued: %s\n", (book.issued ? "Yes" : "No"));
    printf("\n");
}

// Function to display all books in the library
void displayAllBooks(struct Book library[], int num_books) {
    printf("All Books in the Library:\n");
    for (int i = 0; i < num_books; i++) {
        displayBook(library[i]);
    }
}

// Function to add a new book to the library
void NewBook(struct Book library[], int *num_books) {
    if (*num_books < 100) {
        printf("Enter details for the new book:\n");
        printf("Accession Number: ");
        scanf("%d", &library[*num_books].accession_num);
        printf("Author: ");
        scanf("%s", library[*num_books].author);
        printf("Title: ");
        scanf("%s", library[*num_books].title);
        library[*num_books].issued = 0;
        (*num_books)++;
        printf("Book added successfully!\n\n");
    } else {
        printf("Maximum number of books reached. Cannot add more books.\n\n");
    }
}

// Function to display all books of a particular author
void displayBooksByAuthor(struct Book library[], int num_books, const char *author) {
    printf("Books by %s:\n", author);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].author, author) == 0) {
            displayBook(library[i]);
        }
    }
}

// Function to display the number of books with a particular title
void displayNumberOfBooksByTitle(struct Book library[], int num_books, const char *title) {
    int count = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].title, title) == 0) {
            count++;
        }
    }
    printf("Number of books with title \"%s\": %d\n\n", title, count);
}

// Function to display the total number of books in the library
void displayTotalNumberOfBooks(int num_books) {
    printf("Total number of books in the library: %d\n\n", num_books);
}

// Function to issue a book
void issueBook(struct Book library[], int *num_books, int accession_num) {
    for (int i = 0; i < *num_books; i++) {
        if (library[i].accession_num == accession_num && library[i].issued == 0) {
            library[i].issued = 1;
            printf("Book with Accession Number %d issued successfully!\n\n", accession_num);
            return;
        }
    }
    printf("Book with Accession Number %d not found or already issued.\n\n", accession_num);
}

int main() {
    struct Book library[100];
    int num_books = 0;

    int choice;
    do {
        printf("Library Menu:\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all books by a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAllBooks(library, num_books);
                break;
            case 2:
                NewBook(library, &num_books);
                break;
            case 3: {
                char author[50];
                printf("Enter the author's name: ");
                scanf("%s", author);
                displayBooksByAuthor(library, num_books, author);
                break;
            }
            case 4: {
                char title[100];
                printf("Enter the title: ");
                scanf("%s", title);
                displayNumberOfBooksByTitle(library, num_books, title);
                break;
            }
            case 5:
                displayTotalNumberOfBooks(num_books);
                break;
            case 6: {
                int accession_number;
                printf("Enter the Accession Number of the book to be issued: ");
                scanf("%d", &accession_number);
                issueBook(library, &num_books, accession_number);
                break;
            }
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

