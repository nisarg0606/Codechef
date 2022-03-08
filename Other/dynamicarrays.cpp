#include <bits/stdc++.h>
using namespace std;

string *addEntry(string *dynamicArray, int &size, string newEntry)
{
    if (size == 0)
    {
        dynamicArray = new string[1];
        dynamicArray[0] = newEntry;
        size++;
    }
    else
    {
        string *temp = new string[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = dynamicArray[i];
        }
        temp[size] = newEntry;
        size++;
        delete[] dynamicArray;
        dynamicArray = temp;
    }
    return dynamicArray;
}

string *deleteEntry(string *dynamicArray, int &size, string entryToDelete)
{
    if (size == 0)
    {
        cout << "The array is empty" << endl;
    }
    else
    {
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (dynamicArray[i] == entryToDelete)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            cout << "The entry is not found" << endl;
        }
        else
        {
            string *temp = new string[size - 1];
            for (int i = 0; i < index; i++)
            {
                temp[i] = dynamicArray[i];
            }
            for (int i = index; i < size - 1; i++)
            {
                temp[i] = dynamicArray[i + 1];
            }
            size--;
            delete[] dynamicArray;
            dynamicArray = temp;
        }
    }
    return dynamicArray;
}

int main()
{
    string *a = new string[5];
    a[0] = "Kuber";
    a[1] = "Ram";
    a[2] = "Shyam";
    a[3] = "Gopal";
    a[4] = "Raj";
    int size = 5;
    fflush(stdin);
    cout << "The array before adding new entry is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << " " << a[i] << endl;
    }

    a = addEntry(a, size, "Ravi");
    cout << "The array after adding new entry is: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << i << " " << a[i] << endl;
    }
    size = 6;
    a = deleteEntry(a, size, "Ravi");
    cout << "The array after deleting entry is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << " " << a[i] << endl;
    }
    return 0;
}