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
        int n, m;
        cin >> n >> m;

        vector<string> s;

        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            s.push_back(s1);
        }

        int ans = INT_MAX;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = 0;
                for (int k = 0; k < m; k++)
                {
                    diff += abs(s[i][k] - s[j][k]);
                }
                if(diff < ans){
                    ans = diff; 
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}