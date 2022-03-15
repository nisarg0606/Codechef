#include <stdio.h>

int main()
{
    /*
        3 types of loops
        while loop              do while loop               for loop
        entry control loop
        while(condition) ---> TRUE
        {

        }
    */
    int i = 1, sum = 0;
    while (i <= 10)
    {
        printf("%d\n", i);
        sum = sum + i;
        i = i + 1;
    }
    printf("\n%d value of i", i);
    printf("\nThe sum of the numbers between 1 to i is %d", sum);
    return 0;
}