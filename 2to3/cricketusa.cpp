#include<iostream>

using namespace std;

/* Types of functions:
    with arguments with return type
    with arguments without return type
    without arguments with return type
    without arguments without return type
*/
void PLayerName(string name)
{
    cout<<name;
}
float StrikeRate(int runs,int balls)
{
    float z = ((float)runs/balls)*100;
    return z;
}

float RunRate(int overs, int currentrunrate, int targetscore)
{
    int totalovers = 50;
    float z = ((float)targetscore - (currentrunrate * overs))/ totalovers;
    return z;
}

int main()
{
    int num, i;
    cout<<"Enter the number of players: ";
    cin>>num;
    string name[num];
    int runs,balls[num],overs,targetscore;
    float currentrunrate;
    for(i = 0; i < num; i++)
    {
        cout<<"Enter the name of the player: ";
        cin>>name[i];
        fflush(stdin);
        cout<<"Enter the number of balls played: ";
        cin>>balls[i];
        fflush(stdin);
    }
    cout<<"Enter the number of overs played: ";
    cin>>overs;
    fflush(stdin);
    cout<<"Enter the current runrate: ";
    cin>>currentrunrate; // it is the runs you need to score per over to win the match....
    fflush(stdin);
    cout<<"Enter the target score: ";
    cin>>targetscore;
    fflush(stdin);
    cout<<"Name of the player";
    cout.width(40);
    cout<<"Balls played";
    cout<<endl;
    for(i = 0; i < num; i++)
    {
        cout<<name[i];
        cout.width(43);
        cout<<balls[i]<<endl;       
    }
    cout<<"The Required runrate is: "<<RunRate(overs,currentrunrate,targetscore)<<endl;
    return 0;
}