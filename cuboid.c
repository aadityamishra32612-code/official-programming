#include<stdio.h>
int main()
{
    float length, breadth, height, area, volume;
    printf("enter the length of cuboid: ");
    scanf("%f", &length);

    printf("enter the breadth of cuboid: ");
    scanf("%f", &breadth);

    printf("enter the height of cuboid: ");
    scanf("%f", &height);

    area = 2 * (length *  breadth * height + height * length);
    volume = length * breadth * height;

    printf("Surface area of cuboid = %.2f\n", area);
    printf("Volume of cuboid = %.2f\n", volume);

    return 0;
}