#include <stdio.h>

int main() {
    float t;

    printf("Enter the temperature in centigrade: ");
    scanf("%f", &t);

    if (t < 0) {
        printf("Freezing weather\n");
    } else if (t >= 0 && t <= 10) {
        printf("Very Cold weather\n");
    } else if (t > 10 && t <= 20) {
        printf("Cold weather\n");
    } else if (t > 20 && t <= 30) {
        printf("Normal in Temp\n");
    } else if (t > 30 && t <= 40) {
        printf("Its Hot\n");
    } else {
        printf("Its Very Hot\n");
    }

    return 0;
}