#include <stdio.h>

int main()
{
    // nest --> ??? n tree stick
    // nested for loop loop inside a loop
    printf("\nPATTERN 1\n");
    for (int i = 0; i < 5; i++) // 3 --> 0, 1, 2
    {
        for (int j = 0; j < 5; j++) // 3 --> 3, 3, 3
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\nPATTERN 2\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\nPATTERN 3\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\nPATTERN 4\n");
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\nPATTERN 5\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 5; j > 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*

Pattern 1:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

Pattern 2:
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

Pattern 3:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

Pattern 4:
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

Pattern 5:
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/