#include<stdio.h>

int main()
{
    /*
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                code
            }
        }
    */
   int i, j;
   for(i = 0; i<5; i++)
   {
       for(j = 0; j<5; j++)
       {
           printf("%d", i);
       }
       printf("\n");
   }
    return 0;
}

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*
* *
* * *
* * * *
* * * * *

5
5 4 
5 4 3
5 4 3 2
5 4 3 2 1

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

5
4 5 
3 4 5
2 3 4 5
1 2 3 4 5
*/