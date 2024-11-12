#include <stdio.h>

int addDigits(int num) {
    while (num>=10) {
        int sum=0;
        while (num>0) {
            sum =sum + num %10;
            num =num/10;
        }
        num =sum;
    }
    return num;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    int result = addDigits(num);
    printf("The result is: %d\n", result);

    return 0;
}