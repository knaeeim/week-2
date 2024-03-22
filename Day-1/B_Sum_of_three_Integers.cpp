#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int k, s; 
    cin>>k>>s; 

    int cnt = 0;

    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            int z = s - i - j;
            if(0 <= z and z <= k){
                cout<<i<<" "<<j<<" "<<z<<": ->"<<"Confirm"<<endl;
                cnt++;
            } 

        }
    }

    cout<<cnt<<endl; 

    return 0; 
}