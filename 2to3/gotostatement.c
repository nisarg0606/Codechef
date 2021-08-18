#include<stdio.h>
#include<stdlib.h>
// label:

// goto label;

int main()
{
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    table:
    printf("%d x %d = %d\n", num,i, num*i);
    i++;
    if(i<=10){
        goto table;
    }
}

void Checkevenodd(int num)//return type function name(parameters) ar last return int/float/char
{
    if(num % 2 == 0)
    {
        goto even;
    }
    else{
        goto odd;
    }
    even:
    printf("%d is even\n", num);
    return;
    odd:
    printf("%d is odd\n", num);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Checkevenodd(num);
}