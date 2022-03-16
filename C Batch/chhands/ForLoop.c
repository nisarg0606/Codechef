#include <stdio.h>

int main()
{
    /*
      syntax of for loop

      for(i = 0/n; i </> n ;i++/i--)
      {

      }
      int i  = 0;
      while(i < 6)
      {
          i++;
      }
  */
    for (int i = 1; i < 6; i++) // simple for loop --> incremental for loop
    {
        printf("%d\t", i);
    }
    printf("\nDecremental For loop");
    // i = i + 1;
    // i = i - 1;
    for (int i = 5; i > 0; i--)
    {
        printf("\n%d", i);
    }
    return 0;
}