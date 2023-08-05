#include <stdio.h>

int findElementIndex(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 30;

    int index = findElementIndex(arr, size, element);

    if (index != -1) {
        printf("Element %d is located at index %d.\n", element, index);
    } else {
        printf("Element %d is not found in the array.\n", element);
    }

    return 0;
}