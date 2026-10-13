/*
Q86 (Strings)
Check if a string is a palindrome*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    // Remove newline character if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    // Convert to lowercase
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }
    // Check if palindrome
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}