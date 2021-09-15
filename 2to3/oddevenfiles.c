#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Numbers.txt", "w");
    int num;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
        if(num == -1)
            break;
    }
    fclose(fp);
    fp = fopen("Numbers.txt", "r");
    FILE *fp1;
    fp1 = fopen("Odd.txt", "w");
    FILE *fp2;
    fp2 = fopen("Even.txt", "w");
    for(int i = 0; i < '\0'; i++)
    {
        fscanf(fp, "%d", &num);
        if(num % 2 == 0)
        {
            fprintf(fp2, "%d\n", num);
        }
        else
        {
            fprintf(fp1, "%d\n", num);
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    fp1 = fopen("Odd.txt", "r");
    fp2 = fopen("Even.txt", "r");
    printf("Odd numbers are:\n");
    for(int i = 0; i < '\0'; i++)
    {
        fscanf(fp1, "%d", &num);
        printf("%d\n", num);
    }
    printf("Even numbers are:\n");
    for(int i = 0; i < '\0'; i++)
    {
        fscanf(fp2, "%d", &num);
        printf("%d\n", num);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}