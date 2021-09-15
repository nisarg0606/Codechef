#include <stdio.h>

int main()
{
    char s[20];
    int i;
    printf("Enter a string: ");
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("%s", s);
    return 0;
}