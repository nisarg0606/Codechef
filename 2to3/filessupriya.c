#include<stdio.h>

int main()
{
    FILE *fp;
    /*modes in files
    r - read
    w - write
    a - append
    r+ - read and write
    w+ - write and read
    a+ - append and read
    */
    fp = fopen("supriya.txt","w");
    fprintf(fp,"Hello World");
    fclose(fp);
    fp = fopen("supriya.txt","r");
    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    return 0;
}