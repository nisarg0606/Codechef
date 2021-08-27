#include<stdio.h>

int main()
{
    FILE *fp, *fp1, *fp2;
    fp = fopen("numbers.txt", "w");
    fp1 = fopen("odd.txt", "w");
    fp2 = fopen("even.txt", "w");
    int num,i;
    for(i = 1; i <= 30; i++)
    {
        scanf("%d", &num);
        if(num == -1)
            break;
        putw(num,fp);
    }
    fclose(fp);
    fp = fopen("numbers.txt", "r");
    while((num = getw(fp)) != EOF)
    {
        if(num % 2 == 0)
        {
            putw(num, fp2);
        }
        else
        {
            putw(num, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    fp1 = fopen("odd.txt", "r");
    fp2 = fopen("even.txt", "r");

    printf("Printing the contents of odd file\n\n");
    while((num = getw(fp1))!=EOF)
    {
        printf("%d\n", num);
    }
    printf("Printing the contents of Even file\n\n");
    while((num = getw(fp2))!=EOF)
    {
        printf("%d\n", num);
    }
    fclose(fp1);
    fclose(fp2);
}