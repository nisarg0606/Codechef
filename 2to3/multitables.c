#include<stdio.h>
#define ROWS 5
#define COLS 5


int main()
{
    int row, column, product[ROWS][COLS];
    int i,j;
    printf("MULTIPLICATION TABLE\n\n");
    printf("  ");
    for(j=1; j<=COLS; j++)
    {
        printf(" %d\t", j);
    }
    printf("\n");
    printf("-----------------------------------\n");
    for(i=0; i<ROWS; i++)
    {
        row = i+1;
        printf("%d |", row);
        for(j = 1; j<=COLS; j++)
        {
            column = j ;
            product[i][j] = row * column;
            printf("%d\t ", product[i][j]);
        }
        printf("\n");
    }
}