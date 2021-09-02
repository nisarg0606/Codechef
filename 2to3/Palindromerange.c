#include<stdio.h>

int main()
{
    int num, rev, start, end, temp, sum = 0;
    printf("Enter the lower limit: ");
    scanf("%d", &start);
    printf("Enter the upper limit: ");
    scanf("%d", &end);
    printf("Palindrome numbers between %d and %d are: ", start, end);
    for(num = start; num <= end; num++)
    {
        temp = num;
        rev = 0;
        while(temp != 0)
        {
            rev = (rev * 10) + (temp % 10);
            temp = temp / 10;
        }
        if(num == rev)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}