#include <stdio.h>

int main()
{
    int n;
    printf("Enter till what you want odd or even number: ");
    scanf("%d", &n);
    int i;
    printf("Enter what you want(even or odd):\n 1 --- for Even \n 2 --- for odd\n Enter your input: ");
    scanf("%d", &i);
    if (i == 1)
    {
        while (i <= n)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
            i = i + 1;
        }
    }
    else
    {
        i = 1;
        while (i <= n)
        {
            if (i % 2 == 1)
            {
                printf("%d\n", i);
            }
            i = i + 1;
        }
    }
    return 0;
}