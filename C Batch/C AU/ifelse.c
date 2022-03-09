#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    /*
        Arithmetic Operators ---> + - * / %
        Relational Operators --> == => <= < > !=
        Logical Operators --> && || !

    */
    if (i < 100)
    {
        printf("You entered a number less than 100");
        if (i < 50)
        {
            printf("\nyou Entered a number less than 50");
        }
        else
        {
            printf("You entered a number greater than or equals to 50 ");
        }
    }
    else if (i == 100)
    {
        printf("You entered 100");
    }
    else
    {
        printf("You entered a number greater than 100");
    }
}