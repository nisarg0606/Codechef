/*
    camelCase
    snake_case
    MACRO_CASE
    Train-Case
    sPeCiAl|cAsE(lower, uppere, lower,.....|lower, upper, lower,....)

    Test case
    Input:-                     Output:-
    5                               
    A first second         ->     firstSecond
    B first second         ->     first_second
    C first second         ->     FIRST_SECOND
    D first second         ->     First-Second
    F first second         ->     fIrSt|sEcOnD
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        char choice;
        string s1, s2;
        cin >> choice >> s1 >> s2;

        int n1 = s1.length();
        int n2 = s2.length();

        string ans;
        if (choice == 'A')
        {
            transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

            s2[0] = toupper(s2[0]);

            for (int i = 1; i < n2; i++)
                s2[i] = tolower(s2[i]);

            ans = s1 + s2;
        }
        else if (choice == 'B')
        {
            transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
            transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

            ans = s1 + "_" + s2;
        }
        else if (choice == 'C')
        {
            transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
            transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

            ans = s1 + "_" + s2;
        }
        else if (choice == 'D')
        {
            s2[0] = toupper(s2[0]);
            s1[0] = toupper(s1[0]);

            for (int i = 1; i < n2; i++)
                s2[i] = tolower(s2[i]);

            for (int i = 1; i < n1; i++)
                s1[i] = tolower(s1[i]);

            ans = s1 + "-" + s2;
        }
        else if (choice == 'E' || choice == 'F' || choice == 'G' || choice == 'H')
        {

            for (int i = 0; i < n1; i++)
            {
                if (i % 2 == 0)
                    s1[i] = tolower(s1[i]);
                else
                    s1[i] = toupper(s1[i]);
            }
            for (int i = 0; i < n2; i++)
            {
                if (i % 2 == 0)
                    s2[i] = tolower(s2[i]);
                else
                    s2[i] = toupper(s2[i]);
            }

            ans = s1 + "|" + s2;
        }
        cout << ans << endl;
    }
    return 0;
}