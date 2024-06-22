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

const int N = 2e6 + 100;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    ordered_set<ll> left, right;
    ll arr[n + 10];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        right.insert(arr[i]);
    }
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        right.erase(arr[i]);
        cnt += 1LL * right.order_of_key(arr[i]) * (left.size() - left.order_of_key(arr[i]));
        left.insert(arr[i]);
    }
    cout << cnt << endl;

    return 0;
}