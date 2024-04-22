/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 April 2024 ||  01:02:04",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
const ll maxn = (1 << 15);
vector<int> ar;
void precal()
{
    for (ll i = 0; i < maxn; i++)
    {
        string s = to_string(i);
        int len = s.size();
        bool ok = true;
        int j = 0;
        int k = len - 1;
        while (j <= k)
        {
            if (s[j] != s[k])
            {
                ok = false;
                break;
            }
            j++;
            k--;
        }
        if (ok)
            ar.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    precal();

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n), mp(maxn);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < ar.size(); j++)
            {
                int cur = v[i] ^ ar[j];
                ans += mp[cur];
            }
        }
        ans += n;
        cout << ans / 2 << ln;
    }

    return 0;
}