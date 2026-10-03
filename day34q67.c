/*Q67 (Arrays (1D))
Insert an element in an array at a given position*/

#include <stdio.h>

int main() {
    int arr[100];   // large enough array
    int n, pos, element;

    // Input size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element
    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;  // increase size

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
