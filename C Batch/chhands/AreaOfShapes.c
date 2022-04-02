#include <stdio.h>
#define PI 3.14
int main()
{
    // Area of Circle
    //  pi * r * r;
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    float areaofcircle = PI * r * r;
    printf("The Area of the circle is %.2f", areaofcircle);

    // Area of Rectangle
    // l * b;
    float l, b;
    printf("\nEnter the length of the rectangle:");
    scanf("%f", &l);
    printf("\nEnter the breadth of the rectangle:");
    scanf("%f", &b);
    float areaofrectangle = l * b;
    printf("The Area of the circle is %.2f", areaofrectangle);

    return 0;
}