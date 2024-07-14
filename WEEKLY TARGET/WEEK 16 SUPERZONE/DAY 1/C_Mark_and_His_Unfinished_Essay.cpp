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
// #define pair pair<int, int>
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
        int n, c, q;
        cin >> n >> c >> q;
        string s;
        cin >> s;
        vector<pair<ll, ll>> oper(c), segs(c);
        ll cur_len = n;
        for (int i = 0; i < c; i++)
        {
            ll l, r;
            cin >> l >> r;
            oper[i] = {l, r};
            segs[i] = {cur_len + 1, cur_len + (r - l + 1)};
            cur_len = segs[i].second;
        }
        while (q--)
        {
            ll k;
            cin >> k;
            if (k <= n)
            {
                cout << s[k - 1] << ln;
                continue;
            }
            for (int i = c - 1; i >= 0; i--)
            {
                if (k >= segs[i].first && k <= segs[i].second)
                {
                    k = (oper[i].first) + (k - segs[i].first);
                }
                // cout << k << " ";
            }
            // cout << ln;
            cout << s[k - 1] << ln;
        }
    }

    return 0;
}