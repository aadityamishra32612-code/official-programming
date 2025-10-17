#include <stdio.h>

int main() {
    float side, area, volume;

    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side);

    area = 6 * side * side;
    volume = side * side * side;

    printf("Surface Area of Cube = %f\n", area);
    printf("Volume of Cube = %f\n", volume);

    return 0;
}