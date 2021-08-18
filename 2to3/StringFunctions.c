#include<stdio.h>
#include<string.h>
int main()
{
    char s[30], s1[30];
    printf("Enter a string: ");
    gets(s);
    // printf("you entered the string is %s", s);
    printf("\nThe string you entered is : ");
    puts(s);
    printf("The length of the string is: %d", strlen(s));
    printf("\nThe first character of the string is: %c", s[0]);
    printf("\nThe last character of the string is: %c", s[strlen(s)-1]);
    printf("\nThe last character of the string is: %c i.e. nullcaharacter", s[strlen(s)]);
    strcpy(s1, s);
    printf("\nThe string after copying is: %s", s1);
    strcat(s1, s);
    printf("\nThe string after appending is: %s", s1);
    printf("\nAfter comparing the strings : %d", strcmp(s1, s));
    strrev(s1);
    printf("\nThe string after reversing is: %s", s1);
    strrev(s1);
    strupr(s);
    printf("\nThe string after upper casing is: %s", s);
    strlwr(s);
    printf("\nThe string after lower casing is: %s", s);
}


/* String functions
strlen(s)
Returns the length of the string s.
strcpy(d, s)
Copies the string s to the string d.
strcat(d, s)
Appends the string s to the string d.
strcmp(s1, s2)
Compares the strings s1 and s2.
strchr(s, c)
Returns a pointer to the first occurrence of the character c in the string s.
strrev(s)
Reverses the string s.
strstr(s1, s2)
Returns a pointer to the first occurrence of the string s2 in the string s1.
strupr(s)
Converts all lowercase letters in the string s to uppercase.
strlwr(s)
Converts all uppercase letters in the string s to lowercase.

*/