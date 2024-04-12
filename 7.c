#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "Hello";
    const char *str2 = "Hi";

    int len1 = 0, len2 = 0;

    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 == len2) {
        printf("Strings are equal in length.\n");
    } else if (len1 > len2) {
        printf("'%s' is longer than '%s'.\n", str1, str2);
    } else {
        printf("'%s' is longer than '%s'.\n", str2, str1);
    }

    printf("using library function.\n");
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);

     if (str1Len == str2Len) {
        printf("Strings are equal in length.\n");
    } else if (str1Len > str2Len) {
        printf("'%s' is longer than '%s'.\n", str1, str2);
    } else {
        printf("'%s' is longer than '%s'.\n", str2, str1);
    }

    return 0;
}
