// write a program to count number of lines, words and characters in a file and write contents of that file in reverse order in another file.
// Language: c
#include <stdio.h>
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
    int linecount = 0, wordcount = 0, charcount = 0;
    char filecontent[100];
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == '\n')
        {
            linecount++;
        }
        if (ch == ' ')
        {
            wordcount++;
        }
        if (ch != '\n' && ch != ' ')
        {
            charcount++;
        }
        filecontent[charcount] = ch;
    }
    printf("Number of lines in the file is %d\n", linecount);
    printf("Number of words in the file is %d\n", wordcount);
    printf("Number of characters in the file is %d\n", charcount);
    int i;
    for (i = charcount; i >= 0; i--)
    {
        fprintf(fp2, "%c", filecontent[i]);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}