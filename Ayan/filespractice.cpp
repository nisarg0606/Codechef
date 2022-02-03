#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("Sample.txt");
    while (fout)
    {
        getline(cin, line);
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();
    cout<<"The contents of the file is as follows:"<<endl;
    ifstream fin;
    fin.open("Sample.txt");
    while (fin)
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
    return 0;
}
