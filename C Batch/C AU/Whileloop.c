#include<stdio.h>

int main(){
    // 3 types of loop
    /*
        while loop                 do while loop           for loop
        entry control loop         exit control loop        entry control loop 
        if(condition)               {

                                    }
                                    if()
        {

        }
        else
        {

        }

        while(condition == true)
        {

        }

    */
    int i = 1; 
    while(i <= 10)
    {
        printf("%d", i);
        i = i + 1;
    }
    printf("The value of i is %d", i);
    return 0;
}