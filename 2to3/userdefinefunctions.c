#include<stdio.h>

void hello();
int avgno(int, int);
int main()
{
    hello();
    printf("Enter 2 numbers: ");
    int x, y;
    scanf("%d%d", &x, &y);
    // avg = a+b/2;
    printf("%d\n", avgno(x, y));
    return 0;
}

void hello()
{
    printf("Hello World!\n");
}

int avgno(int a, int b)
{
    return (a + b) / 2;
}