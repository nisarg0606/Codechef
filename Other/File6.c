// write a program to copy one file to another. While doing so, all extra spaces should be removed.
// Language: c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    printf("Enter the name of the file you want to open\n");
    char name1[100];
    scanf("%s", name1);
    fp1 = fopen(name1, "r");
    if (fp1 == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    printf("Enter the name of the file you want to open\n");
    char name2[100];
    scanf("%s", name2);
    fp2 = fopen(name2, "w");
    if (fp2 == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == ' ')
        {
            while (ch == ' ')
            {
                ch = fgetc(fp1);
            }
            fprintf(fp2, " %c", ch);
        }
        else
        {
            fprintf(fp2, "%c", ch);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}