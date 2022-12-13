// write a program to display number 1 to 100. Print it to file.
// Language: c
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    printf("Enter the name of the file you want to open\n");
    char name[100];
    scanf("%s", name);
    fp = fopen(name, "w");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    int i;
    for (i = 1; i <= 100; i++)
    {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);
    return 0;
}