#include<stdio.h>
// #define POWER 1
#define PI 3.14
int main()
{
    int base, expo, power; // 3^ 3
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &expo);
    int temp = expo;
    power = 1;
    while (expo > 0)
    {
        power = power * base;
        expo--;//expo = expo - 1;
    }
    printf("%d ^ %d = %d\n", base, temp, power);
    return 0;
}