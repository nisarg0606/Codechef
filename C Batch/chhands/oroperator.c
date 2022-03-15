#include <stdio.h>
int main()
{
    // int i;
    // double d;
    // float f;
    // long l;
    // short s;
    char c;
    printf("Please enter your gender: ");
    scanf("%c", &c);
    if (c == 'b' || c == 'B')
    {
        printf("You are a boy");
    }
    else if (c == 'g' || c == 'G')
    {
        printf("You are a girl");
    }
    else if (c == 't' || c == 'T')
    {
        printf("You are a transgender");
    }
    else
    {
        printf("Please enter a valid character");
    }
    return 0;
}