/*Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number*/

#include <stdio.h>

int main() {
    int num, digit, maxCount = 0, maxDigit = -1;
    int count[10] = {0}; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num < 0) {
        num = -num;
    }

    
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        if (count[digit] > maxCount) {
            maxCount = count[digit];
            maxDigit = digit;
        }
        num /= 10;
    }

    printf("The digit that occurs the most times is: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}
