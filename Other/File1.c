#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    printf("Enter the name of the file you want to open\n");
    char name[100];
    scanf("%s", name);
    fp = fopen(name, "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    char ch;
    // print all contents of the file in capital letters
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", toupper(ch));
    }
    long int size = ftell(fp);
    printf("\nSize of the file is %ld bytes\n", size);
    fclose(fp);
    return 0;
}