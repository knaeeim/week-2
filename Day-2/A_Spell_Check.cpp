#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string ans = "Timru"; 

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        if(s == ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}