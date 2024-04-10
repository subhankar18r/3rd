#include <stdio.h>

void readArray(int array[], int size) {
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void displayArray(int array[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int myArray[size];

    readArray(myArray, size);
    displayArray(myArray, size);

    return 0;
}
