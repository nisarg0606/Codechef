#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The ascii value of the character %c you entered is %d",c,c);
    return 0;
}

// /*
//     s[i] >= 65 && s[i] <= 90
//       s[i]  = s[i] + 32
// */

// #include<stdio.h>

// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);
//     printf("The ascii value of %c character is %d", c, c);  
// }

// #include<stdio.h>

// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);
//     if(c >= 65 && c <= 90)
//     {
//         c = c + 32;
//     }
//     printf("The ascii value of %c character is %d", c, c);
// }