#include <stdio.h>

int main()
{
    int i = 1; // datatype -> int || variable -> i
    printf("Even numbers between 1 to 20 are:\n");
    for (i = 1; i <= 20; i++) // loop variable -> i
    {
        if (i % 2 == 0) // condition
        {
            printf("%d\n", i);
        }
        // printf("%d\n", i); // print i
    }
    printf("Odd numbers between 1 to 20 are: ");
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}