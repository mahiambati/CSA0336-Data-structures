#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i, j, k;
    i = j = k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}