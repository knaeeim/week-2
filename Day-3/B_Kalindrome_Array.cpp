#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool palindrom_check(vector<int> &ans, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (ans[i] != ans[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        bool flag = true;

        int a, b;

        int i = 0, j = n - 1;

        while (i < j)
        {
            if (v[i] != v[j])
            {
                flag = false;
                a = v[i];
                b = v[j];
                break; 
            }
            i++;
            j--;
        }


        if (flag)
            cout << "YES\n";
        else
        {
            vector<int> ans1, ans2;

            for (int i = 0; i < n; i++)
            {
                if (v[i] != a)
                    ans1.push_back(v[i]);
                if (v[i] != b)
                    ans2.push_back(v[i]);
            }

            bool ans = palindrom_check(ans1, ans1.size()) or palindrom_check(ans2, ans2.size());

            if(ans) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}