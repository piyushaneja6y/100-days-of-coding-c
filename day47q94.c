/*Q94 (Strings)
Find the longest word in a sentence*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000], word[100];
    int i, j = 0, max_length = 0, current_length = 0;
    char longest_word[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0' && sentence[i] != '\n'; i++) {
        if (sentence[i] == ' ') {
            word[j] = '\0';
            current_length = j;
            if (current_length > max_length) {
                max_length = current_length;
                strcpy(longest_word, word);
            }
            j = 0;
        } else {
            word[j++] = sentence[i];
        }
    }

    word[j] = '\0';
    current_length = j;
    if (current_length > max_length) {
        max_length = current_length;
        strcpy(longest_word, word);
    }

    printf("The longest word is: %s\n", longest_word);

    return 0;
}