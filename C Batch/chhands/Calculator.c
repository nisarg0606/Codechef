#include <stdio.h>

int main()
{
    int a, b;
    char choice = -1;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("+             ----             For Addition");
    printf("\n-             ----             For Substraction");
    printf("\n*             ----             For Multiplication");
    printf("\n/             ----             For Division");
    printf("\nModuloSign(%) ----             For Modulo\n");
    fflush(stdin);
    scanf("%c", &choice);
    switch (choice)
    {
    case '+':
        printf("The addition of %d and %d is %d", a, b, (a + b));
        break;

    default:
        printf("Please input in the given format");
        break;
    }
    return 0;
}