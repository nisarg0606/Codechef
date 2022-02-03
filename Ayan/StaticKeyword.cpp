#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class StaticKeyword
{
    public:
    StaticKeyword()
    {
        cout<<"Constructor"<<endl;
    }
    static void print()//static function can be called without creating object of class.. //secondly it cannot be overridden
    {
        cout<<"Static Function"<<endl;
    }
    
    void newprint()
    {
        cout<<"New Keyword"<<endl;
    }
};

int main()
{
    // StaticKeyword sk;
    StaticKeyword::print();
    // StaticKeyword::newprint();
}