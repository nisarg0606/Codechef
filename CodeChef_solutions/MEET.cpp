#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
    //stoi is string to int and substr is used to get characters from number i.e (0 denotes position,2 denotes no of characters)
    // (a.substr(0, 2) != "12") -> returns 0 is if is 12 else returns 1
    // (a.substr(5, 1) == "p") ->returns 1 if equals to p else returns 0
    int ans1 = stoi(a.substr(0, 2)) * 60 * (a.substr(0, 2) != "12") + stoi(a.substr(3, 2)) + 720 * (a.substr(5, 1) == "p");
    int ans2 = stoi(b.substr(0, 2)) * 60 * (b.substr(0, 2) != "12") + stoi(b.substr(3, 2)) + 720 * (b.substr(5, 1) == "p");
    return (ans1 <= ans2); //returns true of false
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2; //concanating strings and removing spaces(e.g. 11:04 AM turns to 11:04AM)
        int n;
        cin >> n;
        while (n--)
        {
            string k11, k12, k21, k22;
            cin >> k11 >> k12 >> k21 >> k22;
            k11 += k12; //concanating
            k21 += k22; //concanating
            //k11 is staring time and s1 is given time it returns true as per given return condition in above function and s1,k21 is same as given and ending time if both goes true then cout 1 else 0
            if (compare(k11, s1) && compare(s1, k21))
                cout << "1";
            else
                cout << "0";
        }
        cout << "\n";
    }
    return 0;
}