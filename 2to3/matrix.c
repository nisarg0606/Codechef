#include<stdio.h>

int main()
{
    int i,j,r,c, a[100][100],b[100][100];
    printf("Enter the no of rows for a matrix: ");
    scanf("%d",&r);
    printf("Enter the no of columns for a matrix: ");
    scanf("%d",&c);
    printf("Enter the no of rows for b matrix: ");
    scanf("%d",&r);
    printf("Enter the no of columns for b matrix: ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element at row %d and column %d for a matrix: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element at row %d and column %d for b matrix: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
    // printf("The matrix is:\n");
    // for(i=0;i<r;i++)
    // {
    //     for(j=0;j<c;j++)
    //     {
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }
}