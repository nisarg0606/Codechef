#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The ascii value of the character %c you entered is %d",c,c);
    return 0;
}