/*Q77 (2D Arrays)
Check if the elements on the diagonal of a matrix are distinct*/

#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int diag[n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements
    for (i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    // Check for distinctness
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) break;
    }

    if (flag)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
