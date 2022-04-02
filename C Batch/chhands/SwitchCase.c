#include <stdio.h>

int main()
{
    int choice;
    printf("Enter the number of the month:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    default:
        printf("Please enter a number from 1 to 12...");
        break;
    }
    return 0;
}