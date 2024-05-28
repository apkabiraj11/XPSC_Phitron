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
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    ordered_set<int> ar;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.insert(x);
        mp[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int ans = ar.order_of_key(x);
        cout << ans + mp[x] << " ";
    }

    return 0;
}