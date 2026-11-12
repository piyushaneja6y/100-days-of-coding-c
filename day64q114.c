/*Q114 (Logic Enhancers)
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int freq[256] = {0};

        for (int j = i; j < n; j++) {
            if (freq[(unsigned char)s[j]] == 1) {
                break;
            }

            freq[(unsigned char)s[j]]++;
            
            if (j - i + 1 > maxLen) {
                maxLen = j - i + 1;
            }
        }
    }

    printf("%d", maxLen);

    return 0;
}
