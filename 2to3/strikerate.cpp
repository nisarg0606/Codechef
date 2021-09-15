#include<iostream>

using namespace std;

float StrikeRate(int runs, int balls)
{
    float z = ((float)runs / balls) * 100;
    return z;
}

void PlayerName(string name)
{
    cout<<name;
}

int main()
{
    int num;
    cout<<"Enter the numbers of players: ";
    cin>>num;
    string name[num];
    int runs[num], balls[num];
    for(int i = 0; i < num; i++)
    {
        cout<<"Enter the name of player "<<i+1<<": ";
        cin>>name[i];
        cout<<"Enter the number of runs scored by "<<name[i]<<": ";
        cin>>runs[i];
        cout<<"Enter the number of balls bowled by "<<name[i]<<": ";
        cin>>balls[i];
    }
    cout<<"Player name: ";
    cout.width(30);
    cout<<"Runs: ";
    cout.width(20);
    cout<<"Balls: ";
    cout.width(20);
    cout<<"Strike Rate: "<<endl;
    for(int i = 0; i < num; i++)
    {
        // cout<<"\n\nPlayer "<<i+1<<"\n";
        // PlayerName(name[i]);
        // cout<<"\nStrike Rate: "<<StrikeRate(runs[i], balls[i])<<"%";
        PlayerName(name[i]);
        cout.width(35);
        cout<<runs[i];
        cout.width(20);
        cout<<balls[i];
        cout.width(20);
        cout.precision(4);
        // printf("%.2d", i);
        cout<<StrikeRate(runs[i], balls[i])<<"%";
        cout<<endl;
    }
    return 0;
}