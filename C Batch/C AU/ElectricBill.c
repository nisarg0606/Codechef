#include <stdio.h>

int main()
{
    float units;
    printf("Enter the total units used for the month: ");
    scanf("%f", &units); // 5.54567 ---> 5.55
    if (units < 0)
    {
        printf("Pleae enter a valid input\n");
    }
    float amount = 7 * units;
    if (amount > 0 && amount < 500)
    {
        printf("The amount you need to pay is %.2f", amount);
    }
    else if (amount >= 500 && amount <= 1000)
    {
        printf("The amount you need to pay is %.2f", (amount + amount * 0.05));
    }
    else if (amount > 1000)
    {
        printf("The amount you need to pay is %.2f", (amount + amount * 0.1));
    }
    else
    {
        printf("Please enter a valid input...");
    }

    return 0;
}