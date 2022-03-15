#include <stdio.h>

int main()
{
    int a = 1;
    int evencount = 0, oddcount = 0;
    while (a != 0)
    {
        printf("\nPlease enter the value: ");
        scanf("%d", &a);
        if (a == 0)
        {
            printf("\nExit from while loop....");
        }
        else
        {

            if (a % 2 == 0)
            {
                printf("\nEven Number");
                evencount++; // count = count + 1;
            }
            else
            {
                printf("\nOdd number");
                oddcount++;
            }
        }
    }

    printf("\nTotal even numbers you entered are: %d", evencount);
    printf("\nTotal odd numbers you entered are: %d", oddcount);

    return 0;
}