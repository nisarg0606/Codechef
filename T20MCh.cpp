#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    int removers=20-o;
    int maxscore=c+(36*removers);
    if(maxscore>r)
    {
        cout<<"yes"<<endl;
    }
    else 
        cout<<"no"<<endl;
    return 0;
}