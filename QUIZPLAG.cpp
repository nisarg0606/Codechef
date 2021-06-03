#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=0,n=0,m=0,k=0,temp=0;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int arr[k];
        for (int i = 0; i < k; i++) {
           cin>>arr[i];
        }
        unordered_set<int> test;
        set<int> invalid;
        for (int i = 0; i < k; i++) {
            if(arr[i] <= n){
                if(test.find(arr[i]) == test.end()){
                    test.insert(arr[i]);
                }else{
                    invalid.insert(arr[i]);
                }
            }
        }
        
        cout<<invalid.size()<<" ";
        set<int> :: iterator itr;
        for (itr = invalid.begin(); itr != invalid.end(); itr++)
            cout << *itr << " ";
        cout<<endl;
    }
	return 0;
}