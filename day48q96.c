/*Q96 (Strings)
Reverse each word in a sentence without changing the word order*/

#include <stdio.h>
#include <string.h>

void reverseWords(char *sentence) {
    char *start = sentence;
    char *end = sentence;

    while (*end != '\0') {
        if (*end == ' ') {
            // Reverse the current word
            char *temp = end - 1;
            while (start < temp) {
                char c = *start;
                *start = *temp;
                *temp = c;
                start++;
                temp--;
            }
            start = end + 1;
        }
        end++;
    }

    // Reverse the last word
    char *temp = end - 1;
    while (start < temp) {
        char c = *start;
        *start = *temp;
        *temp = c;
        start++;
        temp--;
    }
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    reverseWords(sentence);

    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}