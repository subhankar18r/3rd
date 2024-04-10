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
    int resultWithLib = strcmp(str1, str2);
    if (resultWithLib == 0) {
        printf("Strings are equal in length\n");
    } else if (resultWithLib < 0) {
        printf("'%s' is longer than '%s'\n", str1, str2);
    } else {
        printf("'%s' is longer than '%s'\n", str2, str1);
    }

    return 0;
}
