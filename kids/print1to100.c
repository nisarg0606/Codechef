#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100) // This loop will run until the value of i is not 100.
    {
        printf("%d\n", i);
        i = i + 1; // increment -> i++; <- Shortcut
    }
    printf("The value of i outside the loop is: %d", i);
    return 0;
}