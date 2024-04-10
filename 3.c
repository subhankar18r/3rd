#include <stdio.h>

void displayArray(int array[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10; 
    int index;

    printf("Initial ");
    displayArray(array, size);

    printf("Enter the index to delete the element: ");
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index.");
        return 1;
    }

    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;

    printf("Array after deletion:\n");
    displayArray(array, size);

    return 0;
}
