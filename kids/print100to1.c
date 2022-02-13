// you want to print 1 to 100.
/*
    1
    2
    3
    4
    5
    6
    loops -> there are total 3 types of loops
    They are: 1. While Loop (entry control loop)
    2. Do While Loop(exit control loop)
    3. For loop
*/

#include <stdio.h>

int main()
{
    int i = 100;
    while (i >= 1)
    {
        printf("%d\n", i);
        i = i - 1; // decrement -> i--; <- Shortcut
    }              // when the value of i becomes 0 the loop will terminate...
    printf("The value of i outside the loop is: %d", i);

    return 0;
}