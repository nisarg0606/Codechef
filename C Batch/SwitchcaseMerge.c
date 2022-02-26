#include <stdio.h>

int main()
{
    int id;
    printf("Enter your ID to confirm your department: ");
    scanf("%d", &id);

    switch (id)
    {
        // 1,2,3--> HR Department
        // 11 12 13 --> Developer Department
        // 21 22 23 --> Management Department

    case 1:
    case 2:
    case 3:
        printf("HR department\n");
        break;
    case 11:
    case 12:
    case 13:
        printf("Developer department\n");
        break;
    case 21:
    case 22:
    case 23:
        printf("Management department\n");
        break;

    default:
        printf("Invalid Id\n");
    }
    return 0;
}


/*
HW:

Swap 2 numbers
Swap 2 numbers without using 3rd Varible
Number is even or odd
Celsius to Fahrenheit
Ohm's Law --- > (I = V/R)

Area of Circle
Area of Triangle
Area of Equilateral Traingle
Area of Rectangle
Area of Square
Area of Rhombus
Area of Pentagon
Area of Hexagon
Area of Octagon

Volume of Sphere
Volume of Hemisphere
Volume of Cone
Volume of Cuboid
*/