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
        set<int> s;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        int total_deleted = n - s.size(); 

        if(total_deleted % 2 == 0){
            cout<<s.size()<<endl;
        }
        else{
           cout<<s.size()-1<<endl; 
        }
    }
    return 0;
}