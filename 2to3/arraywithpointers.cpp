#include<iostream>

using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i,num, *ptr;

    ptr = arr;
    cout<<"Enter a number you want to find in the array: ";
    cin>>num;

    for(i=0;i<10;i++)
    {
        if(num == *ptr)
        {
            cout<<"The number is found at index "<<i<<endl;
            break;
        }
        else if(i==9)
        {
            cout<<"The number is not found in the array"<<endl;
        }
        ptr++;
    }
    return 0;
}