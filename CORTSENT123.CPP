#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0)
	{
	    int k;
	    cin >> k;
	    int flag = 0;
	    for(int i = 0; i < k; i++)
	    {
	        string s;
	        cin >> s;
	        int l1 = 0, l2 = 0;
	        for(int i = 0; i < s.length(); i++)
	        {
	            if(int(s[i]) >= 97 && int(s[i]) <= 109)
	                l1++;
	            else if(int(s[i]) >= 78 && int(s[i]) <= 90)
	                l2++;
	        }
	        if(l1 != s.length() && l2 != s.length())
	            flag = 1;
	    }
	    if(flag == 0)
	        cout << "YES" << "\n";
	    else
	        cout << "NO" << "\n";
	}
	return 0;
}