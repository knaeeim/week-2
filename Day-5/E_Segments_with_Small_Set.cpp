#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> mp;

    ll l = 0, r = 0, ans = 0;

    while (r < n)
    {
        mp[a[r]]++;
        while (mp.size() > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
        ans += (r - l + 1);
        r++;
    }

    cout << ans << endl;

    return 0;
}