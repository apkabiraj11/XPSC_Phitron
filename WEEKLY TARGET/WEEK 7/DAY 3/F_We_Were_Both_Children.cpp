/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 05 May 2024 ||  13:19:04",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
            {
                ar.push_back(x);
                mp[x]++;
            }
        }

        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ll cnt = 0;
            for (int j = i; j <= n; j += i)
            {
                ans[j] += mp[i];
            }
        }
        int mx = 0;
        for (auto v : ans)
        {
            mx = max(mx, v);
        }

        cout << mx << ln;
    }

    return 0;
}