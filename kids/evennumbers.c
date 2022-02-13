#include<stdio.h>

int main()
{
    //You want even numbers between 1 to 100
    // 1st condition -> divisible by 2
    // 2nd condition -> on dividing by 2 it should give us remainder 0
    // even numbers: 0 2 4 6 8 10 12 ......
    int i = 0;
    printf("Even numbers between 1 to 100 are-\n");
    while(i <= 100)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
        // else{
        //     printf("%d\n", i);
        // }
        i++;// i = i + 1;
    }
    return 0;
}