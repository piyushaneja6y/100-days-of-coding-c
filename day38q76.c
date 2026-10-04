/*Q76 (2D Arrays)
Check if a matrix is symmetric*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3];
    int i, j;
    bool isSymmetric = true;

    // Input elements for the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Display the result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}