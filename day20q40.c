/*Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it*/

#include <stdio.h>

int main() {
    int num, complement = 0, power = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 10 == 0) {
            complement += 1 * power;
        }
        num /= 10;
        power *= 10;
    }

    printf("1's complement: %d\n", complement);

    return 0;
}