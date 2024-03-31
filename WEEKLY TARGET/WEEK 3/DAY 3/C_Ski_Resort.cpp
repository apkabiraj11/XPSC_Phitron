/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 31 March 2024 ||  19:33:39",
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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> ar(n);
        ll sum = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] <= q)
            {
                ans++;
            }
            else
            {
                if (ans >= k)
                {
                    ll temp = ans - k + 1;
                    sum += (temp * (temp + 1)) / 2;
                }
                ans = 0;
            }
        }
        if (ans >= k)
        {
            ll temp = ans - k + 1;
            sum += (temp * (temp + 1)) / 2;
        }
        cout << sum << ln;
    }

    return 0;
}