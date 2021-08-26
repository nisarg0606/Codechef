#include<stdio.h>

int main()
{
    FILE *fp, *fp1, *fp2;
    int i, number;
    // clrscr();
    printf("Enter the contents of the file: ");
    fp = fopen("numbers.txt", "w");
    for(i = 1; i <= 30; i++)
    {
        scanf("%d", &number);
        if(number == -1)
        {
            break;
        }
        putw(number, fp);
    }
    fclose(fp);

    fp = fopen("numbers.txt", "r");
    fp1 = fopen("odd.txt", "w");
    fp2 = fopen("even.txt", "w");

    /*Read the data from numbers.txt and store it in odd.txt and even.txt*/
    /*EOF means the end of file*/
    while((number = getw(fp)) != EOF)//getw is used to read the data from the file which are integers
    {
        if(number % 2 == 0)
        {
            putw(number, fp2);/* writes in even.txt*/
        }
        else
        {
            putw(number, fp1);/* writes in odd.txt*/
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    fp1 = fopen("odd.txt", "r");
    fp2 = fopen("even.txt", "r");

    printf("\nOdd numbers are: \n");
    /*Read the data from odd.txt and even.txt and print it*/
    while((number = getw(fp1)) != EOF)
    {
        printf("%d\n", number);
    }
    fclose(fp1);
    printf("The even numbers are: \n");
    while((number = getw(fp2)) != EOF)
    {
        printf("%d\n", number);
    }
    fclose(fp2);
    return 0;
}