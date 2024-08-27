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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        while (m--)
        {
            int u, v;
            cin >> u >> v;
            mp[u]++;
            mp[v]++;
        }
        map<int, int> store;
        for (auto [x, y] : mp)
        {
            store[y]++;
        }
        vector<int> ar;
        for (auto [x, y] : store)
        {
            ar.push_back(y);
        }
        sort(ar.begin(), ar.end());
        if (ar.size() == 3)
        {
            cout << ar[1] << " " << ar[2] / ar[1] << ln;
        }
        else
        {
            cout << ar[0] - 1 << " " << ar[1] / (ar[0] - 1) << ln;
        }
      }

    return 0;
}