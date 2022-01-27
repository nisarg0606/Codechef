#include<bits/stdc++.h>
using namespace std;

// void printArray(int arr[]);
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // int n;
    // cout<<"Enter how many elements you want to enter: ";
    // cin>>n;
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    // for (int i = 0; i < n; i++)
    // {
        // cout<<"Enter element "<<i+1<<": ";
        // cin>>arr1[i];
    // }
    printArray(arr1, n);
}