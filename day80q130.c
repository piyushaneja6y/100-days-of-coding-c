/*Q130 (File Handling)
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record*/

#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int roll, marks;

    // Writing student records to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(file, "John Doe 101 85\n");
    fprintf(file, "Jane Smith 102 90\n");
    fprintf(file, "Bob Johnson 103 78\n");

    fclose(file);

    // Reading student records from file
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %d\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}