#include<stdio.h>
#include<cstring>
int main()
{
    char n[] = "ANANYYA";
    int i, j;
    int len = strlen(n);
    printf("length: %d\n", len);
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < len; j++)
        {
            printf("%c ", n[j]);
        }
        printf("\n");
    }
    return 0;
}