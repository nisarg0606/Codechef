#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age >= 18 && age <= 100)
    {
        printf("You are eligible to vote....");
    }
    else if (age < 0)
    {
        printf("Please enter a valid age...");
    }
    else
    {
        printf("You are not eligible to vote....");
    }
    return 0;
}