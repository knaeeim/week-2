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
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<string> v;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            string s;
            cin >> s;
            v.push_back(s);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                if (v[i][j] == 'D')
                {
                    if (a[i] == 9)
                    {
                        a[i] = 0;
                        a[i]--;
                    }
                    a[i]++;
                }

                if (v[i][j] == 'U')
                {
                    if (a[i] == 0)
                    {
                        a[i] = 9;
                        a[i]++;
                    }
                    a[i]--;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}