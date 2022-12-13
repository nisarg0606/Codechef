// write a program to combine contents of two files in a third file. Add line numbers to the beginning of each line.
// Language: c
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch1, ch2;
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
    fp2 = fopen(name2, "r");
    if (fp2 == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    char name3[100];
    printf("Enter the name of the file you want to open\n");
    scanf("%s", name3);
    fp3 = fopen(name3, "w");
    if (fp3 == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    int count = 1;
    fprintf(fp3, "%d ", count);
    while ((ch1 = fgetc(fp1)) != EOF)
    {
        fprintf(fp3, "%c", ch1);
        if (ch1 == '\n')
        {
            count++;
            fprintf(fp3, "%d ", count);
        }
    }
    fprintf(fp3, "%d ", count);
    while ((ch2 = fgetc(fp2)) != EOF)
    {
        fprintf(fp3, "%c", ch2);
        if (ch2 == '\n')
        {
            count++;
            fprintf(fp3, "%d ", count);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}