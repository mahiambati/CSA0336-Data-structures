#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (arr[i] % 2 == 0) {
            printf("is even\n");
        } else {
            printf("is odd\n");
        }
    }

    return 0;
}