#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "a+");

    if(fp == NULL)
    {
        printf("File open failed!\n");
        exit(-1);
    }
    printf("Enter what you want to add in file: ");
    char buf[100];
    // int n = 0;
    fflush(stdin);
    scanf( "%s", &buf);
    fprintf(fp, "%s\n", buf);
    fflush(stdin);
    fclose(fp);
    fp = fopen("test.txt", "r");
    fscanf(fp, "%s", buf);
    printf("%s", buf);
    fclose(fp);
    return 0;
}