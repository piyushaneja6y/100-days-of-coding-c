/*Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/

#include <stdio.h>

int main() {
    int i, j, N;

    N = 5; 

    for(i = N; i >= 1; i--) {
       
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        
        for(j = i; j <= N; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
