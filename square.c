#include<stdio.h>
int main()
{
    float side, area, parameter;
    printf("enter the side of square: ");
    scanf("%f", &side);

    area = side * side;
    parameter = 4 * side;
    
    printf("area of square = %f\n", area);
    printf("parameter of square = %f\n", parameter);

    return 0;

}

