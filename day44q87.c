/*Q87 (Strings)
Count spaces, digits, and special characters in a string*/

#include <stdio.h>
#include <ctype.h>  // for isdigit(), isspace(), isalpha()

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input

    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            spaces++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (!isalpha(str[i])) {  
            // not a letter, not a digit, not space → special character
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
