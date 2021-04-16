#include<bits/stdc++.h>
using namespace std;
void tests()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]%2 == 0)
            even++;
        else 
            odd++;
    }
    cout<<min(odd,even)<<endl;
}

int main(int argc, char const *argv[])
{
    long long t;
    cin>>t;
    while (t--)
    {
        tests();
    }
    return 0;
}
