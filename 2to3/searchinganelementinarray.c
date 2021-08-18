#include<stdio.h>

int main()
{
    int array[9] = {100,99,88,77,66,55,44,33,22};
    int i;
    int num;
    printf("Enter a number you want to search for in an array: ");
    scanf("%d", &num);
    for (i = 0; i < 9; i++)
    {
        if (array[i] == num)
        {
            printf("%d is in the array at index %d.\n", num, i);
            break;
        }
    }
    if(i == 9)
    {
        printf("%d is not in the array.\n", num);
    }
    return 0;
}