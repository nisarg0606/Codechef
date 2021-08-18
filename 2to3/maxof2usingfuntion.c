#include <stdio.h>

void maxof2(int a, int b);

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    maxof2(a,b);
}


void maxof2(int a, int b)
{
    int result;
    if (a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    printf("%d", result);
    // return result;
}

/* there are two types of functions in C:
we can call the function in two ways:
call by reference:
call by value:
*/