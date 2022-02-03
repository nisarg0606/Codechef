#include<bits/stdc++.h>
using namespace std;
/*
    append a
    append+ a+
    write w
    write+ w+
    r+
    r
*/
int main()
{
    /*
        File Streams
        fstream -> input and output streams
        ifstream -> input file stream 
        ofstream -> output file stream (TO write in the file you need to use ofstream)
    */
    ofstream out("Ayaan.txt");
    // while(fout)
    // {
    //     if(line == "-1")
    //         break;
    // }
    if(out.is_open())
    {
        cout<<"File is open"<<endl;
        out<<"Hello World"<<endl;
    }
    else
        cout<<"File is not open"<<endl;
    out.close();
    ifstream in("Ayaan.txt");
    if(in.is_open())
    {
        cout<<"File is open"<<endl;
        string str;
        while(getline(in,str))
            cout<<str<<endl;
    }
    else
        cout<<"File is not open"<<endl;
}
//input
/*
Hey there this is ayaan
I am studing in 9th grade
I love to play games  
-1

Hey there this is ayaan
I am studing in 9th grade
I love to play games
*/