#include<stdio.h>
#include<stdlib.h>

int main()
{
    char filename[100];
    FILE *fp, *fp2;
    int i, number;

    fp = fopen("Test.txt", "w");
    for(i = 10; i <= 100; i+=10) // i++ = i = i+1 i+=100 i = i + 100
    {
        putw(i,fp);
    }
    fclose(fp);

    printf("Enter a file name you want to open: ");
    scanf("%s", filename);
    
    if((fp2 = fopen(filename, "r")) == NULL)
    {
        printf("File not found\n");
        exit(0);
    } 
    else
    {
        for(i = 1; i<= 20; i++)
        {
            number = getw(fp2);
            if(feof(fp2))
            {
                printf("End of file\n");
                break;
            }
            else
            {
                printf("%d\n", number);
            }
        }
        fclose(fp2);
    }
}