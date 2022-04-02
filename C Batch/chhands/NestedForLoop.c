#include <stdio.h>

int main()
{
    // nest --> ??? n tree stick
    // nested for loop loop inside a loop
    /*
    Pattern 1:
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */
    printf("\nPATTERN 1\n");
    for (int i = 0; i < 5; i++) // 3 --> 0, 1, 2
    {
        for (int j = 0; j < 5; j++) // 3 --> 3, 3, 3
        {
            printf("* ");
        }
        printf("\n");
    }
    /*
    Pattern 2:
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
    */

    printf("\nPATTERN 2\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    /*
    Pattern 3:
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    */

    printf("\nPATTERN 3\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    /*
    Pattern 4:
    5 5 5 5 5
    4 4 4 4 4
    3 3 3 3 3
    2 2 2 2 2
    1 1 1 1 1
    */

    printf("\nPATTERN 4\n");
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    /*
    Pattern 5:
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    */

    printf("\nPATTERN 5\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 5; j > 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    /*
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
    */

    /*
    5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1
    */
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */

    int n = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    /*
    10
    9 8
    7 6 5
    4 3 2 1
    */
    /*
    1
    0 0
    1 1 1
    0 0 0 0
    1 1 1 1 1
    */
    for (int i = 2; i < 7; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ", i % 2);
        }
        printf("\n");
    }
    return 0;
}