#include<stdio.h>
#include<string.h>
int main()
{
    //ascii value
    char a[] = "JIYAAN";//dynamic array
    int i, j;
    int len = strlen(a);
    for (i = 0; i < 6; i++)
    {
        for(j = 0; j <= len; j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
    }
}

/*
J
J I
J I Y
J I Y A
J I Y A A
J I Y A A N
*/