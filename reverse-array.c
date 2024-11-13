#include <stdio.h>


void reverseArray(int arr[], int n) {
    int temp;
    int i = 0;
    int j = n - 1;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}


int main() {
    int arr[100];
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    int j=n-1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}