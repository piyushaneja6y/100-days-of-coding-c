/*Q98 (Strings)
Print initials of a name with the surname displayed in full*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    // Remove newline character if present
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    int lastSpace = -1;

    // Find position of last space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials
    printf("Output: ");
    
    if (lastSpace != -1) {
        printf("%c.", name[0]);

        for (int i = 1; i < lastSpace; i++) {
            if (name[i] == ' ' && name[i + 1] != ' ')
                printf("%c.", name[i + 1]);
        }

        // Print surname in full
        printf(" %s", &name[lastSpace + 1]);
    } else {
        printf("%s", name); // Single-word name
    }

    return 0;
}