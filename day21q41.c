/*Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number*/


#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    
    lastDigit = num % 10;

    
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    
    swappedNum = lastDigit;
    int temp = num / 10;
    while (temp >= 10) {
        swappedNum = swappedNum * 10;
        temp /= 10;
    }
    swappedNum = swappedNum * 10 + firstDigit;

    printf("Original number: %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}