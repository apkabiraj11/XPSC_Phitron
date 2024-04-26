/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 April 2024 ||  12:40:19",
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

    ll n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<ll> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        ll sum = 0;
        multiset<ll> store;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                sum += ar[j];
                store.insert(ar[j]);
            }
        }

        if (store.size() >= 2 && sum >= l && sum <= r)
        {
            ll m = abs(*store.rbegin() - *store.begin());
            if (m >= x)
                ans++;
        }
    }
    cout << ans << ln;

    return 0;
}