#include <stdio.h>
// Now We will print A to Z using while Loop
int main()
{
    char ch = 'A';
    int count = 0;
    printf("Alphabets for A-Z are\n");
    while (ch <= 'Z')
    {
        printf("%c\n", ch);
        count++; // count = count + 1;
        // count--;//count = count - 1;
        ch++; // ch = ch + 1;
    }
    printf("Total alphabets from A-Z is: %d", count);
    return 0;
}