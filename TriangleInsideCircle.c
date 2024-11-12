#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float side = radius * sqrt(2);
    area = side * side;
    printf("The area of the largest rectangle that can be enclosed in the circle is: %f\n", area);

    return 0;
}