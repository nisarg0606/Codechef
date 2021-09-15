// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *fp, *fp1;
//     fp = fopen("PrimeInFiles.txt","w");
//     fp1 = fopen("NotPrime.txt","w");
//     int i,j, count = 0;
//     for(i=2;i<=100;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             if(i%j==0)
//                 count++;
//         }
//         if(count == 2)
//             fprintf(fp,"%d  ",i);
//         else if(count != 2)
//             fprintf(fp1, "%d  ",i);
//         count = 0;
//     }
//     fclose(fp);
//     fclose(fp1);
//     fp = fopen("PrimeInFiles.txt","r");
//     int k;
//     printf("\nPRIME NUMBERS: ");
//     while(fscanf(fp,"%d",&k)!=EOF)
//     {
//         printf("%d  ",k);
//     }
//     fclose(fp);
//     fp1 = fopen("NotPrime.txt","r");
//     printf("\nNOT PRIME NUMBERS: ");
//     while(fscanf(fp1,"%d",&k)!=EOF)
//     {
//         printf("%d  ",k);
//     }
//     fclose(fp1);
// }

#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp, *fp1;
    fp = fopen("primefiles.txt", "w");
    fp1 = fopen("compositefiles.txt", "w");
    int i, j, count = 0;
    for (i = 2; i <= 100; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
            fprintf(fp, "%d", i);
        else if (count != 2)
            fprintf(fp1," %d", i);
        count = 0;
    }
    fclose(fp);
    fclose(fp1);
    fp = fopen("primefiles.txt", "r");
    int k;
    printf("prime nos");
    while (fscanf(fp, "%d", &k) != EOF)
        ;
    {
        printf("%d ", k);
    }
    fclose(fp);
    fp1 = fopen("compositefiles.txt", "r");
    printf("composite nos");
    while (fscanf(fp1, "%d", &k) != EOF)
        ;
    {
        printf("%d ", k);
    }
    fclose(fp1);
}