/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 28 May 2024 ||  20:04:38",
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long int
#define pair pair<ll, ll>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> ar(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        vector<ll> v(n + 1, INT_MIN);
        for (ll i = 0; i < n; i++)
        {
            ll seg_sum = 0;
            int cnt = 0;
            for (ll j = i; j < n; j++)
            {
                seg_sum += ar[j];
                cnt = j - i + 1;
                v[cnt] = max(v[cnt], seg_sum);
            }
        }
        for (ll k = 0; k <= n; k++)
        {
            ll ans = 0;

            for (ll j = 1; j <= n; j++)
            {
                ll sum = min(j, k) * x + v[j];
                ans = max(sum, ans);
            }
            cout << ans << " ";
        }
        cout << ln;
    }

    return 0;
}