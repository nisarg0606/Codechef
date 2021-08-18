#include <stdio.h>

/*defination of array
    Array is defined as the collection of similar types of data items
    that are stored in a contiguous block of memory.
    The array is a linear collection of items.
    int a[number of items]
*/
void main()
{
    int n, i;
    printf("Enter which  number you want to get the table of:  ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, i * n);
    }
    // return 0;
}