/*Q79 (2D Arrays)
Perform diagonal traversal of a matrix*/

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Main diagonal traversal
    printf("Main diagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    // Secondary diagonal traversal
    printf("\nSecondary diagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]);
    }

    printf("\n");
    return 0;
}
