/*Q45 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    numerator = 2;
    denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series: %.2f\n", sum);
    return 0;
}