#include <stdio.h>

void insertElements(int arr[], int size) {
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int findMaxElement(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int arr[20];

    insertElements(arr, 20);

    int maxElement = findMaxElement(arr, 20);

    int frequency[maxElement + 1] ;

    for (int i = 0; i <= maxElement; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < 20; i++) {
        frequency[arr[i]]++;
    }

    printf("Element\tFrequency\n");
    for (int i = 0; i <= maxElement; i++) {
        if (frequency[i] > 0) {
            printf("%d\t%d\n", i, frequency[i]);
        }
    }

    return 0;
}
