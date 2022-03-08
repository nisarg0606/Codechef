#include <bits/stdc++.h>
using namespace std;

class DynamicArrayAllocationAndDeletion
{
    int size;
    string *dynamicArray;

public:
    DynamicArrayAllocationAndDeletion()
    {
        size = 0;
        dynamicArray = NULL;
    }
    string *addEntry(string newEntry)
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
    string *deleteEntry(string entryToDelete)
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
    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << dynamicArray[i] << endl;
        }
    }
};

int main()
{
    DynamicArrayAllocationAndDeletion d;
    string *dynamicArray = d.addEntry("Ravi");
    dynamicArray = d.addEntry("Vijay");
    dynamicArray = d.addEntry("Raju");
    dynamicArray = d.addEntry("Ramesh");
    dynamicArray = d.addEntry("Suresh");
    dynamicArray = d.addEntry("Rajesh");
    dynamicArray = d.addEntry("Rakesh");
    d.printArray();
    dynamicArray = d.deleteEntry("Rakesh");
    d.printArray();
    dynamicArray = d.deleteEntry("Rakesh");
    d.printArray();
    dynamicArray = d.deleteEntry("Suresh");
}