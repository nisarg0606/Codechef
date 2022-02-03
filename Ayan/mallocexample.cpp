#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len; // varible
    cout << "Enter the value of Len: ";
    cin >> len;                             // 5
    int *ptr;                               // pointer memory? -> 4 yes
    ptr = (int *)malloc(sizeof(int) * len); // allocating memory to hold 5 integers
    for (int i = 0; i < len; i++)
    {
        cout << "Enter a number: ";
        cin >> *(ptr + i);
    }
    for (int i = 0; i < len; i++)
    {
        cout << "The value of ptr is: " << *(ptr + i) << endl;
    }
    free(ptr); // free the memory //destory the pointer
    cout<<ptr;
    return 0;
}
