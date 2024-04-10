#include <stdio.h>

void displayArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array1[100] = {1, 2, 3};
    int size1 = 3;
    int array2[100] = {4, 5, 6, 7};
    int size2 = 4;
    int mergedArray[100];
    int mergedSize = size1 + size2;

    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }

    for (int j = 0; j < size2; j++) {
        mergedArray[size1 + j] = array2[j];
    }

    displayArray(mergedArray, mergedSize);

    return 0;
}
