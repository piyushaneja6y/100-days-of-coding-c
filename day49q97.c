/*
Q97 (Strings)
Print the initials of a name*/

#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // Print first character
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print character after every space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}