#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        int cnt = 0;

        for (auto x : mp)
        {
            if(x.second % 2 == 1){
                cnt++;
            }
        }

        if(cnt > k+1){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }

    return 0;
}