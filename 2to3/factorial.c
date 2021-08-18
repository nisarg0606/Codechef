#include<stdio.h>

int main()
{
    long int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%ld", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;

    printf("%d! = %ld\n", n, fact);
    return 0;
}

// 5
// Enter a number: 5
// 5! = 120 -> 5*4*3*2*1 = 120 -> 1*2*3*4*5 = 120