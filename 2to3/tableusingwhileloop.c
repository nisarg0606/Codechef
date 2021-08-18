#include<stdio.h>

int main()
{
    int i=1, n;
    printf("Enter the value of n for which you want the table of: ");
    scanf("%d", &n);
    while (i<=10)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++; // i = i + 1
    }
    return 0;
}