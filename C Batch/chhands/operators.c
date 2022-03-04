#include <stdio.h>

int main()
{
    /*
        Arithmetic Operators
        +
        -
        *
        /
        %
        ++(incremental opertal) --> a = 5; a++; --> a = a + 1; --->  a = 5 + 1
        a = a + 2; a++ i++
        --(decremental opertal) --> a = 5; a--; a = a - 1; --> a = 4
    */

    int a = 5;
    a++;
    printf("%d\n", a);
    a--;
    printf("%d", a);

    /*
        Relational Operator

        == ---> Equals
        != ---> Not Equals
        >= --> Greater than Equals
        <= --> Less than Equals
        > --> Greater than
        < --> Less Than

        == --> to comapare 2 things
    */
    int b = 5;
    printf("\nEquals Equals demo ( == ) %d", a == b);
    b = 6;
    printf("\nNot Equals demo ( != ) %d", a != b);
    printf("\nGreater Than demo ( > ) %d", a > b);
    printf("\nless Than demo ( < ) %d", a < b);
    printf("\nGreater Than Equals to demo ( >= ) %d", a >= b);
    printf("\nLess Than Equals to demo ( <= ) %d", a <= b);
}