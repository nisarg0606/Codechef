// #include<stdio.h>

// int main()
// {
//     FILE *fp;
//     int num, i;
//     float price, value;
//     char item[20], filename[20];
//     printf("Enter the file name: \n");
//     scanf("%s", filename);
//     fp = fopen(filename, "w");
//     printf("Enter inventory data\n\n");
//     for(i = 1; i <= 3; i++)
//     {
//         printf("Enter the item name of the product: ");
//         scanf("%s", item);
//         printf("Enter the number of items: ");
//         scanf("%d", &num);
//         printf("Enter the price of the item: ");
//         scanf("%f", &price);
//         value = price * num;
//         fprintf(fp, "%s %d %f\n", item, num, value);
//     }
//     fclose(fp);

//     fp = fopen(filename, "r");

//     printf("The things you entered in the files are\n\n");
//     while(!feof(fp))
//     {
//         fscanf(fp, "%s %d %f\n", item, &num, &value);
//         printf("%s %d %.2f\n", item, num, value);
//     }
//     fclose(fp);
//     return 0;
// }

#include<stdio.h>

int main()
{
    FILE *fp;
    long n;
    char c;
    fp = fopen("test.txt", "w");
    while((c=getchar())!=EOF)
        putc(c, fp);

    printf("No, of characters entered = %ld\n", ftell(fp));
    fclose(fp);
    fp = fopen("test.txt", "r");
    n = 0L;

    while(feof(fp) == 0)
    {
        fseek(fp, n, 0);
        printf("Position of %c is %ld\n", getc(fp), ftell(fp));
        n = n +5L;
    }
    putchar('\n');

    fseek(fp, -1L, 2);
    do{
        putchar(getc(fp));
    }
    while(!fseek(fp, -2, 1));
    fclose(fp);
    return 0;
}