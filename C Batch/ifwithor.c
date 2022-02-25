#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age < 18 || age > 120)
    {
        printf("You are not eligible to vote");
    }
    else
    {
        printf("You are eligible to vote...");
    }
}