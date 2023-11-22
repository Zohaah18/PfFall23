/** programmer: Zoha Ahmed
* Date: 14 Nov, 2023
* Desc: task 4, lab 10
/**

#include <stdio.h>
#include <string.h>

// Function to reverse a word in-place
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}

// Function to reverse each word in a sentence
void reverseWords(char *sentence) {
    char *start = sentence;
    char *end = sentence;

    while (*end) {
        if (*end == ' ') {
            reverseWord(start, end - 1);
            start = end + 1;
        }
        ++end;
    }

    // Reverse the last word 
    reverseWord(start, end - 1);
}

int main() {
    char sentence[100];

    // Input sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

  
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Reverse each word in the sentence
    reverseWords(sentence);

    // Print the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
