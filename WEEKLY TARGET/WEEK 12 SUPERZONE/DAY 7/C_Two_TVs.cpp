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

    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    ll last = 0;
    for (auto [x, y] : mp)
    {
        last += y;
    }
    if (last <= 2)
        yes;
    else
        no;

    return 0;
}