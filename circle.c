#include<stdio.h>
int main()
{
    float radius, area, parameter;
    printf("enter the radius of square: ");
    scanf("%f", &radius);

    area = 3.14f * radius * radius;
    parameter = 2 * 3.14f * radius;

    printf("area of circle = %f\n", area);
    printf("parameter of circle = %f\n", parameter);

    return 0;
}