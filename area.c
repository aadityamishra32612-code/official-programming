#include <stdio.h>

int main() {
    float length, breadth, area, parameter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    parameter = 2 * (length + breadth);

    printf("Area of rectangle = %f\n", area);
    printf("Parameter of rectangle = %f\n", parameter);

    return 0;
}