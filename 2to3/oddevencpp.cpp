#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("numbers.txt");
    int i=0;
    while(i<=100)
    {
        fout << i << endl;
        i++;
    }
    fout.close();
    ifstream fin;
    fin.open("numbers.txt");
    ofstream fout2;
    fout2.open("odd.txt");
    ofstream fout3;
    fout3.open("even.txt");
    int num;
    int num2;
    while(fin >> num)
    {
        if(num%2==0)
        {
            fout3 << num << endl;
        }
        else
        {
            fout2 << num << endl;
        }
    }
    fin.close();
    fout2.close();
    fout3.close();
    return 0;
}