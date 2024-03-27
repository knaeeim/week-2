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
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    ll r = 0, l = 0, ans = INT_MAX, sum = 0; 

    while(r < n){
        sum +=a[r]; 

        while(sum >= s){
            ans = min(ans, r-l+1);
            sum -=a[l]; 
            l++;
        }
        r++;
    } 

    if(ans == INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0; 
}