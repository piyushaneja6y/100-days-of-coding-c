/*Q72 (2D Arrays)
Find the sum of all elements in a matrix*/

#include <stdio.h>

int main() {
    int rows, cols;

    // Input size of matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  // Declare 2D array

    // Input elements
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of all elements
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Print the sum
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
