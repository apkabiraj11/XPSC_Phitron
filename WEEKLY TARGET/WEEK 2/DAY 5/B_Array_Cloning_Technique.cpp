/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 March 2024 ||  11:10:50",
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
        vector<int> v(n);
        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            mx = max(mx, mp[v[i]]);
        }
        int ans = n - mx;
        while (mx < n)
        {
            ans++;
            mx *= 2;
        }
        cout << ans << ln;
    }

    return 0;
}