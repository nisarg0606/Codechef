#include <stdio.h>

int main()
{
    int i;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    /*

        if(condition == true)
        {
            then it will come here
            //query // operations
        }
        else --> this is not compulsory
        {
            if condition in if statement becomes false than it goes with else part
        }
    */
    // \n is known as new line Character
    // \t it makes a tab between 2 data...
    // if (i <= 5)
    // {
    //     printf("You entered the value less than 5\n");
    // }
    // else
    // {
    //     printf("You entered the value greater than 5\n");
    // }

    int a, b, c; // initialization of variable eg: a = 21 and b = 10
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("A and B are Equal....\n");
    }
    else
    {
        if (a > b) // is 10 greater 10??
        {
            printf("A is greater than B ");
        }
        else
        {
            printf("B is greater than A");
        }

        // if (a > b)
        // {
        //     printf("A is greater than B\n");
        // }
        // else
        // {
        //     printf("A is Less than B\n");
        // }

        // if (a < b)
        // {
        //     printf("A is Less than B\n");
        // }
        // else
        // {
        //     printf("A is greater than B\n");
        // }

        // if (a <= b)
        // {
        //     printf("A is less than and Equals to B\n");
        // }
        // else
        // {
        //     printf("A is not less than and not Equals to B\n");
        // }
    }