#include <stdio.h> // header file --> what is the use of header file???

int main()
{
    printf("Hello World\n"); // print function
                             /* datatypes in c --> 64 bit compiler
                                 int --> 4 bytes --> %d
                                 float --> 4 bytes  %f
                                 char --> 1 byte     %c
                                 double --> 8 bytes %lf
                                 long --> 8 bytes   %ld %li
                                 short --> 2 bytes   %hd
                                 long long int 8 bytes %lld
                             */
    int i;
    printf("Enter the value of i: ");
    scanf("%d", &i); // & meaning? --> address of i in the memory

    // printf("The value of i entered by you is %d", i);
    fflush(stdin); // standard input --> stdout
    char c;
    printf("Enter the value of C: ");
    scanf("%c", &c);
    double d;
    float f;
    long l;

    printf("The value of i is %d\n", i);
    printf("The value of c is %c", c);
    // printf("The value of i is %d", i);
}

/*
 HW:
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