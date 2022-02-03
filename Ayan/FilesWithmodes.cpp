#include <bits/stdc++.h>
using namespace std;
int main()
{
    // by default openmode = ios::in | ios::out
    // ios::app -> append
    // ios::ate -> seek to end of file
    // ios::binary -> binary mode
    // ios::in -> read
    // ios::out -> write
    // ios::trunc -> truncate
    // ios::in | ios::out -> read and write
    fstream fio;
    string line;
    fio.open("Sample.txt", ios::trunc | ios::out | ios::in);
    while (fio)
    {
        getline(cin, line);

        if (line == "-1")
            break;
        fio << line << endl;
    }
    line = "0";
    cout<<line<<endl;
    fio.seekg(6, ios::beg);
    while(fio)
    {
        getline(fio, line);
        cout<<line<<endl;
    }
    // char A[6];
    // fio.seekg(0, ios::beg);
    // fio.read(A, 6);
    // A[5] = 0;
    // cout<<A<<endl;
    fio.close();
    return 0;
}
