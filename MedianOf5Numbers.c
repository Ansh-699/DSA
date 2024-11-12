#include <stdio.h>

float calculate_mean(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e) / 5.0;
}

int calculate_median(int a, int b, int c, int d, int e) {
    int numbers[5] = {a, b, c, d, e};
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    return numbers[2];
}

int main() {
    int a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float mean = calculate_mean(a, b, c, d, e);
    printf("Mean: %.2f\n", mean);

    int median = calculate_median(a, b, c, d, e);
    printf("Median: %d\n", median);

    return 0;
}