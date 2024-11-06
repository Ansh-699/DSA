#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i<n-1; i++) {
        int swapped = 0;
        for (int j = 0; j<n-i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                swapped = 1;
            }
        }
        if (swapped==0) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {45, 45, 66, 34, 67, 2, 5, 7, 898, 9, 45};
    int n = sizeof(arr) / sizeof(int);
    printf("Original array: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
