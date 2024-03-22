#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    ll a[n];
    for (int i = 0; i < n; i++){
       int val; cin>>val; 
       if(val != x) cout<<val<<" ";
    }
    cout<<endl; 

    return 0;
}