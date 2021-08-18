#include<stdio.h>

int main()
{
    // datatype varibalename[size];
    int a[10];
    int i;
    printf("Enter elements of an array: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array is: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}