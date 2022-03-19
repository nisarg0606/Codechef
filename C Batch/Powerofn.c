#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, power, n, j = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of power: ");
    scanf("%d", &power);
    while (i <= power)
    {
        j = j * n;
        i++;
    }
    printf("Answer is %d", j);
    j = pow(n, power);
    printf("\nAnswer is %d", j);
    return 0;
}