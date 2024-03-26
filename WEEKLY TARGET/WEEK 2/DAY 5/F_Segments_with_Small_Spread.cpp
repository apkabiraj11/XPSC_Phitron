/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 March 2024 ||  00:31:14",
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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<ll> m;
    ll l = 0;
    ll r = 0;
    ll ans = 0;
    while (r < n)
    {
        m.insert(v[r]);
        ll mn = *m.begin();
        ll mx = *m.rbegin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (mx - mn > k && l < r)
            {
                auto it = m.find(v[l]);
                m.erase(it);
                mn = *m.begin();
                mx = *m.rbegin();
                l++;
            }
            ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << ln;

    return 0;
}