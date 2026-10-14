/*Q89 (Strings)
Count frequency of a given character in a string*/

#include <stdio.h>

int main() {
    char str[100], ch;
    int frequency = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            frequency++;
        }
    }

    printf("Frequency of '%c' in the string is: %d\n", ch, frequency);

    return 0;
}