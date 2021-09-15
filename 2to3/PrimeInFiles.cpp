#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("prime.txt");
    ofstream fout2;
    fout2.open("notprime.txt");
    int i, j, count = 0;
    for (i = 2; i <= 100; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            fout << " " << i;
        else if (count != 2)
            fout2 << " " << i;
        count = 0;
    }
    fout.close();
    fout2.close();
    ifstream fin;
    fin.open("prime.txt");
    int k;
    cout << "\nPrime numbers: ";
    while (fin >> k)
        cout << k << " ";
    fin.close();
    cout << "\n\nNot Prime numbers: ";
    ifstream fin2;
    fin2.open("notprime.txt");
    int l;
    while (fin2 >> l)
        cout << l << " ";
    fin2.close();
    return 0;
}