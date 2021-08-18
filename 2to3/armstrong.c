#include <stdio.h>

int checkArmstrong(int n1); //prototype

int main()
{
    int n;
    printf("Enter a number to check armstong: ");
    scanf("%d", &n);
    if (checkArmstrong(n))
    {
        printf("%d is an armstrong number", n);
    }
    else
    {
        printf("%d is not an armstrong number", n);
    }
    // getch();
}

int checkArmstrong(int n1)
{
    int remainder, sum, temp;
    temp = n1;
    sum = 0;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp = temp / 10;
    }
    return (n1 == sum);
}

/*

*
* *
* * *
* * * *
* * * * *

* * * * *
* * * *
* * *
* *
*

*/