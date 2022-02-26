#include <stdio.h>

int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);
    if (marks >= 75 && marks <= 100)
    {
        printf("A Grade");
    }
    else if (marks >= 60 && marks < 75)
    {
        printf("B Grade");
    }
    else if (marks >= 45 && marks < 60)
    {
        printf("C Grade");
    }
    else if (marks >= 33 && marks < 45)
    {
        printf("D Grade");
    }
    else if (marks < 33 && marks >= 0)
    {
        printf("F grade and Fail");
    }
    else
    {
        printf("Please enter a valid marks");
    }
    return 0;
}

/* Hotel Bill managment
    if bill >= 500 20% discount
    if bill >=400 and less than 500 15% discount
    if bill >=300 and less than 400 10% discount
    else bill <300 no discount
*/