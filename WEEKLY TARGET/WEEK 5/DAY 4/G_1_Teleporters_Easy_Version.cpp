/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 April 2024 ||  14:24:15",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<ll, ll>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
int solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> ar(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
        ar[i] = ar[i] + i + 1;
    }
    sort(ar.begin(), ar.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += ar[i];
        if (sum > c)
        {
            cout << i << ln;
            return 0;
        }
    }
    cout << n << ln;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}