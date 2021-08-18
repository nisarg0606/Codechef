#include<iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int *ap = &a, *bp = &b;
    cout<<"Before swap: *ap "<< *ap <<" *bp "<< *bp <<endl;
    // here *ap stores the address of a. When we use *ap to access a, the value is accessed
    // from the memory location pointed by *ap.
    //here *bp stores the address of b. When we use *bp to access b, the value is accessed
    // from the memory location pointed by *bp.
    //when we write ap only then its address is accessed
    //when we write bp only then its address is accessed
    *ap = *ap + *bp;//a = a + b;
    *bp = *ap - *bp;//b = a - b;
    *ap = *ap - *bp;//a = a - b;
    cout<<"After swap: *ap "<< *ap <<" *bp "<< *bp <<endl;
}

//program to show the difference between using pointers and using references
//Language: cpp
//Path: 2to3\swaptwonumberusingpointers.cpp
#include<iostream>


using namespace std;


int main()
{
    int a = 1;
    int b = 2;
    int *ap = &a, *bp = &b;
    cout<<"Before swap: *ap "<< *ap <<" *bp "<< *bp <<endl;
    // here *ap stores the address of a. When we use *ap to access a, the value is accessed
    // from the memory location pointed by *ap.
    //here *bp stores the address of b. When we use *bp to access b, the value is accessed
    // from the memory location pointed by *bp.
    //when we write ap only then its address is accessed
    //when we write bp only then its address is accessed
    swap(a, b);
    cout<<"After swap: *ap "<< *ap <<" *bp "<< *bp <<endl;
}