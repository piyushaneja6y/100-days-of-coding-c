/*Q100 (Strings)
Print all sub-strings of a string*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    printf("All sub-strings of the string are:\n");
    for (i = 0; i < len; i++) {
        for (j = i + 1; j <= len; j++) {
            str[j] = '\0';
            printf("%s\n", str + i);
        }
    }

    return 0;
}