/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation*/


#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary representation: ");
    if (n == 0) {
        printf("0");
    } else {
        while (n > 0) {
            printf("%d", n % 2);
            n = n / 2;
        }
    }
    return 0;
}