/*
Q120 (File Handling)
Write a program to take a string input. Change it to sentence case.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Convert first character to uppercase
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }

    printf("%s", str);

    return 0;
}