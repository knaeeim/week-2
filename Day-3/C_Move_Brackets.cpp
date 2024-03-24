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

        string s;
        cin >> s;

        int cnt = 0, opening = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '('){
                opening++;
            }
            else {
                opening --;
            }
            if(opening < 0){
                cnt++;
                opening = 0;
            }

        }

        cout << cnt << endl;
    }
    return 0;
}