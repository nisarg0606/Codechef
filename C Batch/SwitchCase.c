#include <stdio.h>

int main()
{
    // what is switch case????
    //  why do we use switch case?
    //  moths --> if user enter 1 then he will get jan as putput and 12 then dec....
    int month;
    printf("Enter the number you want month for: ");
    scanf("%d", &month);
    switch (month)
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
        printf("June");
        break;
    default:
        printf("Please enter a number from 1 to 12...");
        break;
    }
    return 0;
}