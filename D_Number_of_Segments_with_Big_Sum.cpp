#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    ll n, s; 
    cin>>n>>s; 

    int a[n]; 
    for(int i=0; i<n; i++) cin>>a[i]; 

    ll l = 0, r = 0, ans = 0, sum = 0, cnt = 0;

    while(r < n){
        sum += a[r];
        while( sum >= s ){
            ans += ((n-cnt) - (r-l+1)) + 1;
            sum -=a[l]; 
            l++;
            cnt++;
        } 
        r++;
    } 

    cout<<ans<<endl; 
    return 0; 
}