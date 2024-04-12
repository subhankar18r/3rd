#include <stdio.h>

void displayArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10; 

    displayArray(array, size);

    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }

    displayArray(array, size);

    return 0;
}
