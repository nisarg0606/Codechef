#include <stdio.h>

int main(int argc, char const *argv[])
{
    float amount;
    printf("Enter your amount: ");
    scanf("%f", &amount);

    if (amount >= 500)
    {
        amount = amount - (0.2 * amount);
    }
    else if (amount >= 400 && amount < 500)
    {
        amount = amount - (0.15 * amount);
    }
    else if (amount >= 300 && amount < 400)
    {
        amount = amount - (0.1 * amount);
    }
    else
    {
        printf("No Discount\n");
    }
    printf("The bill you need to pay is %.2f", amount);
    return 0;
}
