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
    int element, index;

    printf("Initial ");
    displayArray(array, size);

    printf("Enter the element to insert and its index :");
    scanf("%d %d", &element, &index);

    if (index < 0 || index > size) {
        printf("Invalid index\n");
        return 1;
    }

    for (int i = size - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }

    array[index] = element;
    size++;

    printf("Array after insertion:\n");
    displayArray(array, size);

    return 0;
}
