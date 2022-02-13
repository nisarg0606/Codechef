#include <stdio.h>

int main()
{
    // Now We will print a to z using while Loop
    char ch = 'a';
    int count = 0;
    printf("Alphabets for a-z are\n");
    while (ch <= 'z')
    {
        printf("%c\n", ch);
        count++; // count = count + 1;
        // count--;//count = count - 1;
        ch++; // ch = ch + 1;
    }
    printf("Total alphabets from a-z is: %d", count);
}