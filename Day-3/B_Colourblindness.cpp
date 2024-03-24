#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        string s, k;
        cin>>s>>k; 

        bool flag = true;

        for(int i=0; i<n; i++){
            if(s[i] == 'R' and k[i] != 'R' || s[i] != 'R' and k[i] == 'R'){
                flag = false;
                break;
            }
        } 

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0; 
}