#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter a string: ");
    scanf("%s", str);

    for(int i=0; i < strlen(str); i++)
    {
        if(str[i] >='A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s in lowercase", str);
}