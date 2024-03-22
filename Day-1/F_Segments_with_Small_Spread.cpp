#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, ans = 0;

    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();

        //jodi mx and mn er difference k er choto soman hoy taile ans e oi value diuta add kortechi 
        if ((mx - mn) <= k){
            ans += (r - l + 1);
        }
        else{
            //ekhane dukhbe jokhon mx and mn er diff k er theke boro hobe. and ese l delete korte thakbo... tarpor jokhon condition milbe tokhon break kore dibe 
            while (l < r){
                mn = *ml.begin(), mx = *ml.rbegin();
                if ((mx - mn) <= k)
                {
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            //break kore ekhane asbe and r baranor aage oi range value duitar count add kore nite hobe 
            mn = *ml.begin(), mx = *ml.rbegin();

            if ((mx - mn) <= k){
                ans += (r - l + 1);
            }
        }

        //then r++ kore then agin process same cholbe; 
        r++;
    }

    cout << ans << endl;

    return 0;
}