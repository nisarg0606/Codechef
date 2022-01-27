 #include<bits/stdc++.h>
 using namespace std;
 
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, num, *ptr;

    ptr = arr;

    cout<<"Enter the number to be searched: ";
    cin>>num;

    for(i = 0; i < 10; i++)
    {
        if(*ptr == num)
        {
            cout<<"The number is found at index "<<i<<endl;
            break;
        }
        else if (i == 9)
        {
            cout<<"The number is not found in the array"<<endl;
            ptr++;
        }
        else 
        {
            ptr++;
        }
    }
    cout<<"The value of ptr is: "<<*ptr<<endl;
    return 0;
}
 