/*Q126 (File Handling)
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content*/

#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File not found or cannot be opened.\n");
    } else {
        char ch;
        printf("Content of the file:\n");
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }
        fclose(file);
    }

    return 0;
}