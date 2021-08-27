#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char ch;
    ofstream fs("filesincpp.txt");
    fs << "Hello World!";
    fs.close();

    ifstream ifs("filesincpp.txt");
    while(ifs.get(ch))
    {
        cout<<ch;
    }
    return 0;
}