#include <stdio.h>

int main()
{
    //     float x;
    //     // printf("The value of x is %d", x);
    //     // printf("Enter the value of x: ");
    //     /*scanf("%f", &x);
    //     printf("The Value of x is %f", x);
    //     */
    //    char c;
    //    printf("Enter the value of c: ");
    //    scanf("%c", &c);
    //    printf("The value of c is: %c", c);

    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    int sum, sub, mul, div, mod;
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    mod = x % y;
    printf("The addition of %d and %d is %d\n", x, y, sum);
    printf("The substraction of %d and %d is %d\n", x, y, sub);
    printf("The multiplication of %d and %d is %d\n",x,y, mul);
    printf("The division of x and y is %d\n", div);
    printf("The module/remainder of x and y is %d\n", mod);
}

// multiplication : *
// division: /
// addition: +
// substraction: -
