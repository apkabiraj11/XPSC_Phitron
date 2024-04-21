/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 21 April 2024 ||  23:54:32",
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
        vector<int> ar(n + 5);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[__lg(x)]++;
        }
        ll ans = 0;
        for (auto v : mp)
        {
            ans += (1LL * v.second * (v.second - 1)) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}