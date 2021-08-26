#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,count = 0;
    printf("Enter a string: ");
    scanf("%s", s);
    int len = strlen(s);
    for(i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("The length of the string is %d\n", len);
    printf("The length of the string by manually counting is: %d", count);
}