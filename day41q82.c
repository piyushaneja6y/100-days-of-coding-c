/*Q82 (Strings)
Print each character of a string on a new line*/

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces until newline

    // Loop through each character and print it on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
