#include<stdio.h>
#include<stdlib.h>

int main()
{
    char buf[100];
    int i;
    // clrscr();
    FILE *fp;
    fp = fopen("jiyaan.txt", "w");
    printf("Enter a word: ");
    scanf("%s", &buf);
    fprintf(fp, "%s\n", buf);
    fclose(fp);
    fp = fopen("jiyaan.txt", "r");
    fscanf(fp, "%s", &buf);
    printf("%s\n", buf);
    fclose(fp);
    // getch();
    return 0;
}