/*Q68 (Arrays (1D))
Delete an element from an array*/

#include <stdio.h>

int main() {
    int arr[100];   // large enough array
    int n, pos;

    // Input size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    // Shift elements to the left
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // decrease size

    // Print updated array
    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
