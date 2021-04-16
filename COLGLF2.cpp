#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define INF 1000000000
void Solve()
{
	int n;
	cin >> n;
	ll time = 0;
	int intro[n];
	for (int i = 0; i < n; i++)
	{
		cin >> intro[i];
		time += intro[i];
	}
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			int temp;
			cin >> temp;
			time += temp - intro[i];
		}
	}
	cout << time << '\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		Solve();
	}
	return 0;
}