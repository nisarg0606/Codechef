#include<iostream>

using namespace std;

int main()
{
    // int count = 0;
    // char c;
    // cout<<"Input your text: ";
    // cin.get(c);
    // while(c!='\n')
    // {
    //     cout.put(c);
    //     count++;
    //     cin.get(c);
    // }
    // cout<<"\nNumbers of characters: "<<count<<endl;
    int size = 20;
    char city[size];
    cout<<"Enter city name: ";
    cin>>city;
    cout<<"City Name: "<<city<<endl;
    fflush(stdin);
    cout<<"Enter your city name: ";
    cin.getline(city, size);
    cout<<"City name now: "<<city<<endl; 
    return 0;
}

/*
S
S O
S O H
S O H A
S O H A M
*/