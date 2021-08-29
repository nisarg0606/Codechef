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
    // return 0;
    int size = 20;
    char city[20];
    cout<<"Enter city name: ";
    cin>>city;
    cout<<"City Name: "<<city<<endl;
    fflush(stdin);
    cout<<"Enter your city name: ";
    cin.getline(city, size);
    cout<<"City name now: "<<city<<endl; 
}