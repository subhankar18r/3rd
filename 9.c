#include <stdio.h>
#include <string.h>

int main() {
    char firstName[100], middleName[100], lastName[100];
    char abbreviated[100];

    printf("Enter your full name: ");
    scanf("%s %s %s", firstName, middleName, lastName);

    printf("Abbreviated name: ");

     printf("%c.%c. %s\n", firstName[0], middleName[0], lastName);

    return 0;
}
