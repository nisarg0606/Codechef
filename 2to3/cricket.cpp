#include <iostream>
#include <iomanip>
using namespace std;

float Runrate(int balls, int currentrunrate, int targetedscore)
{
    return ((float)targetedscore - (currentrunrate * balls)) / 50;
}

void NameofPlayer(string name)
{
    cout << name;
}

float StrikeRate(int runs, int balls)
{
    float z = ((float)runs / balls) * 100;
    return z;
}
int main()
{
    int num;
    cout << "Enter the number of players: ";
    cin >> num;
    int overs, currentrunrate, targetedscore, balls[num], ballsplayed[num];
    string name[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the name of the player: ";
        cin >> name[i];
        fflush(stdin);
        cout << "Enter the number of balls bowled: ";
        cin >> balls[i];
        fflush(stdin);
        cout<<"Enter the balls played by the player: ";
        cin>>ballsplayed[i];
    }
        cout << "Enter the number of overs: ";
        cin >> overs;
        cout << "Enter the current runrate: ";
        cin >> currentrunrate;
        fflush(stdin);
        cout << "Enter the targeted score: ";
        cin >> targetedscore;
        cout << "Name of the player";
        cout.width(40);
        cout << "Balls played by the player";
        cout.width(40);
        cout <<"The strike Rate of the player";
        cout<<endl;
        for (int i = 0; i < num; i++)
        {
            NameofPlayer(name[i]);
            cout.width(30);
            cout << balls[i];
            cout.width(40);
            cout << StrikeRate(balls[i], overs) << endl;
        }
        cout << "The required runrate is: " << Runrate(overs, currentrunrate, targetedscore) << endl;
        return 0;
    }