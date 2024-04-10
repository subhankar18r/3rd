#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove newline character from input
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int isPalindrome = 1; 

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("'%s' is a palindrome string.\n", str);
    } else {
        printf("'%s' is not a palindrome string.\n", str);
    }

    return 0;
}
