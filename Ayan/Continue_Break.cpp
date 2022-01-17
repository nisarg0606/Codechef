#include<bits/stdc++.h>
using namespace std;

int main()
{
    // for (int i = 0; i < 10; i++)
    // {
    //     if(i == 5)
    //         break;// terminate the loop at that moment only
    //         // continue; // terminate that iteration and continue with the next iteration
    //     cout<<i<<endl;
    // }
    


    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            if(i == 2 && j == 3)
                continue;
            cout<<i<<" "<<j<<endl;
        }
    }
}

/*
Output:
1 1
1 2
1 3
2 1
2 2 // 2 3 iteration is terminated use continue here
3 1
3 2
3 3
*/