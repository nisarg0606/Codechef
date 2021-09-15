#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("DhruvandSupriya.txt", "a");
    int n;
    printf("Enter the number of lines you want to write in the file: ");
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        printf("Enter the line %d: ", i+1);
        char str[100];
        scanf("%s", str);
        fprintf(fp, "%s\n", str);
    }  
    // fclose(fp);
    // fp = fopen("DhruvandSupriya.txt", "r");
    char str[100];
    for(i=0; i<'\0'; i++)
    {
        fgets(str, 100, fp);
        printf("%s", str);
    }
    fclose(fp);
    return 0; 
}