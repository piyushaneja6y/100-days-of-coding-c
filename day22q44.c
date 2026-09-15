/*Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms*/

#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    int numerator = 1;
    int denominator = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series: %.2f\n", sum);
    return 0;
}