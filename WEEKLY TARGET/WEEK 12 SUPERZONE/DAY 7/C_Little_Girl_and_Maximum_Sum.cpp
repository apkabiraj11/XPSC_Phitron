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
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, q;
    cin >> n >> q;
    vector<ll> ar(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end(), greater<int>());
    vector<ll> dif(n + 2);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        dif[l]++;
        dif[r + 1]--;
    }
    for (ll i = 1; i <= n; i++)
    {
        dif[i] = dif[i - 1] + dif[i];
    }
    sort(dif.begin(), dif.end(), greater<int>());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += (dif[i] * ar[i]);
    }
    cout << ans << ln;

    return 0;
}