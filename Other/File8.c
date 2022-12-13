// write a pogram to insert the following contents in a file name "File1.txt":
// Customer NO.     Account Type    Balance
// 1                Savings         1000
// 2                Current         2000
// 3                Savings         3000
// 4                Current         4000

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *fp, *fp1;
    fp = fopen("file1.txt", "w");
    fprintf(fp, "Customer NO.     Account Type    Balance\n");
    fprintf(fp, "101                Savings         2000\n");
    fprintf(fp, "102                Current         5000\n");
    fprintf(fp, "103                Savings         3000\n");
    fprintf(fp, "104                Current         10000\n");
    fclose(fp);
    printf("Copy the contents of File1.txt to File2.txt\n");
    fp = fopen("sample.txt", "r");
    fp1 = fopen("File2.txt", "w+");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, fp1);
        printf("%c", ch);
    }
    fclose(fp1);
    return 0;
}