#include <stdio.h>

int main()
{
    int a, b;
    char choice;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    fflush(stdin);
    printf("+  --- Addition\n");          // +
    printf("-  --- Substration\n");       // -
    printf("*  --- Multiplication\n");    // *
    printf("/  --- Division\n");          // /-> This is Sign of Divison
    printf("%  --- Modulu(Remainder)\n"); // % -> This is Sign of Modulu
    printf("Enter what you want to perform: ");
    scanf("%c", &choice);
    switch (choice)
    {
    case '+':
        printf("The addition of %d and %d is %d", a, b, a + b);
        break;
    case '-':
        printf("The Substraction of %d and %d is %d", a, b, a - b);
        break;
    case '*':
        printf("The Multiplication of %d and %d is %d", a, b, a * b);
        break;
    case '/':
        printf("The Division of %d and %d is %d", a, b, a / b);
        break;
    case '%':
        printf("The Modulo of %d and %d is %d", a, b, a % b);
        break;
    default:
        printf("Invalid Choice....");
        // break;
    }
    return 0;
}