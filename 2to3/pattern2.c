#include <stdio.h>

int main()
{
    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5; j++)
    //     {
    //         printf(" %d ", i*j);
    //     }
    //     printf("\n");
    // }

    char i,j;
    char temp;
    printf("Enter the last value you want: ");
    scanf("%c", &temp);
    for(i='A'; i<=temp; i++)
    {
        for(j='A'; j<=i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}