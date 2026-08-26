/*Q12 (Conditional Statements)
Write a program to input two integers and find the larger one using if–else*/
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The larger number is %d.\n", num1);
    } else {
        printf("The larger number is %d.\n", num2);
    }

    return 0;
}