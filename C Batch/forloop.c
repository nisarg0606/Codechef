#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    } // simple for loop

    // nested for loop
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }

    for (int i = 'e'; i >= 'a'; i--)
    {
        for (int j = 'e'; j >= i; j--)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    /*
        A B C D E
        A B C D E
        A B C D E
        A B C D E
        A B C D E
    */

    /*
        A A
        B B
        C C
        D D
        E E
    */

    /*
        E D C B A
        E D C B A
        E D C B A
        E D C B A
        E D C B A
    */

    /*
     A
     A B
     A B C
     A B C D
     A B C D E
     */
    return 0;
}