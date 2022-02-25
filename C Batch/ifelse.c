#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    // if (a > b)// for 2 numbers
    // {
    //     printf("%d is greater than %d", a, b);
    // }
    // else
    // {
    //     printf("%d is greater than %d", b, a);
    // }
    // if (a > b) //----------------------> for 3 numbers
    // {
    //     if (a > c)
    //     {
    //         printf("a is the largest number");
    //     }
    //     else
    //     {
    //         printf("c is the largest number");
    //     }
    // }
    // else if (b > a)
    // {
    //     if (b > c)
    //     {
    //         printf("b is the largest number");
    //     }
    //     else
    //     {
    //         printf("c is the largest number");
    //     }
    // }
    // else
    // {
    //     printf("c is the largest number");
    // }

    if (a > b && a > c) // ||
    {
        printf("a is largest number");
    }
    else if (b > a && b > c)
    {
        printf("b is largest number");
    }
    else
    {
        printf("c is largest number");
    }
}