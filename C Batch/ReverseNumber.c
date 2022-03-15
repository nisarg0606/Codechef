#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to reverse: ");
    scanf("%d", &n);
    int rev = 0;
    int sum = 0;
    int palindrome = n;
    int count = 0;
    while (n > 0)
    {
        int temp = n % 10;
        rev = rev * 10 + temp;
        sum = sum + temp;
        count++;
        n = n / 10;
    } // sum of the digits--> 1234 == 10 ---------------------------- palindrome 121 1221 13431
    printf("The Reverse of the number is: %d\n", rev);
    printf("The sum of the number is: %d\n", sum);
    if (palindrome == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");
    printf("Total digits in the number is %d", count);
    return 0;

    /*
        2
        3
        2 ^ 3
        8

        
        5
        3
        125
    */
}