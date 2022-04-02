#include <stdio.h>

int main()
{
    int n, rev = 0, sum = 0;
    // printf("Enter a number you want the reverse of:");
    printf("Enter a number you want check palindrome or not: ");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        sum = sum + lastdigit;
        n = n / 10;
    }
    printf("Reverse Number is: %d", rev);
    printf("\nSum of digits is: %d", sum);
    if (temp == rev)
        printf("\n%d is a palindrome number", rev);
    else
        printf("\n%d is not a palindrome number", rev);

    return 0;
    // 1 + 2 + 3 = 6 -> 3 + 2 + 1 = 6  -> 2 + 3 + 1 = 6
}