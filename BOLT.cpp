#include <iostream>
using namespace std;
float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        float m = k1 * k2 * k3 * v;
        float var = 100 / m;
        // cout << round(var) << endl;
        float bolt = 9.58;
        if (round(var) == bolt)
        {
            cout << "No" << endl;
        }
        else if(round(var) < bolt)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
