#include<stdio.h>

int main()
{
    FILE *f1, *f2, *f3;
    int num, i;
    printf("Enter the content of the file: ");
    f1 = fopen("DATA", "w");
    for(i = 1; i<=30; i++)
    {
        scanf("%d", &num);
        if(num == -1) break;
        putw(num, f1);
    }
    fclose(f1);
    f1 = fopen("DATA", "r");
    f2 = fopen("ODD", "w");
    f3 = fopen("EVEN", "w");

    while((num = getw(f1)) != EOF)
    {
        if(num % 2 == 0)
        {
            putw(num, f3);
        }
        else
        {
            putw(num, f2);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f2 = fopen("ODD", "r");
    f3 = fopen("EVEN", "r");
    printf("ODD: ");
    while((num = getw(f2)) != EOF)
    {
        printf("%d ", num);
    }
    printf("\n");
    printf("EVEN: ");
    while((num = getw(f3)) != EOF)
    {
        printf("%d ", num);
    }
    printf("\n");
    fclose(f2);
}