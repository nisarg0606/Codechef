// #include<stdio.h>

// int main()
// {
/*
    1 to 10
    printf("1");
    printf("2");
    printf("3");
    printf("4");
    printf("5");
    printf("6");
    what do you understand by loop??


    while loop              do.... while loop           for loop
*/
//    int i = 0;
//     while(i <= 10)
//     {
//         printf(i);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i = 1;
    while (i >= 1 && i <= 10)
    {
        // printf("%d\n", i);
        printf("The square of the number %d is %d\n", i, i * i);
        i++;
    }
    printf("The value of i outside the loop is: %d", i);
    return 0;
}