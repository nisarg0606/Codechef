#include <stdio.h>

int main()
{
    int n;
    // printf("Enter which table you want to print: ");
    printf("Enter the last number you want table off: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("-----Table of %d-----\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n\n");
    }
    return 0;
}