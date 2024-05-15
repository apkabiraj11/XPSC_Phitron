/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 15 May 2024 ||  23:10:17",
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
    ll x;
    cin >> x;
    ll ans = LLONG_MAX;
    // vector<ll> v;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ll gcd = __gcd(i, (x / i));

            if ((i / gcd) * (x / i) == x)
            {
                ans = i;
            }
        }
    }

    cout << ans << " " << x / ans << ln;

    return 0;
}