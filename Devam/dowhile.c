// difference between do-while and while
// do-while will execute at least once even if the condition is false
// while will not execute at all if the condition is false
#include <stdio.h>

int main()
{
    int i = 0;
    do{
        printf("Do-while loop\n");
        printf("%d\n", i);
        i++;
    }while(i < -1);
    i = 0;
    while (i < 5)
    {
        printf("While loop\n");
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}