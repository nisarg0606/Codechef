#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("ananyya.txt");
    string line;

    while (fout)
    {
        getline(cin, line);

        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();

    ifstream fin;

    fin.open("ananyya.txt");
    while (fin)
    {
        getline(fin, line);

        cout << line << endl;
    }
    fin.close();
    return 0;
}