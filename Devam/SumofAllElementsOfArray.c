#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5], sum = 0, i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        // 1 2 3 4 5
        printf("\nEnter %d element: ", i);
        scanf("%d", &a[i]);
        sum = sum + a[i]; // right side is evaluated first and then it is
        // assigned to left side. So, in this scenario firstly sum + a[i] is calculated and then it is
        // stored in sum varibale
        printf("The value of Sum right now is: %d\n", sum);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nThe Sum of all the elements of the Array is: %d", sum);
}