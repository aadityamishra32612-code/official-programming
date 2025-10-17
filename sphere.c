#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    area = 4 * 3.14 * radius * radius;
    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;

    printf("Surface Area of Sphere = %f\n", area);
    printf("Volume of Sphere = %f\n", volume);

    return 0;
}