#include <stdio.h>

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    int arr[size];
    printf("before swap\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    size = sizeof(arr) / sizeof(arr[0]);

    swapAlternate(arr, size);
    printf("after swap\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}