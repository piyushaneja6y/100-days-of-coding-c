/*Q124 (File Handling)
Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc()*/

#include <stdio.h>

int main() {
    char source_filename[100], destination_filename[100];
    FILE *source_file, *destination_file;
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", source_filename);

    printf("Enter the destination file name: ");
    scanf("%s", destination_filename);

    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destination_file = fopen(destination_filename, "w");
    if (destination_file == NULL) {
        printf("Error opening destination file.\n");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    fclose(source_file);
    fclose(destination_file);

    printf("Content copied successfully.\n");

    return 0;
}