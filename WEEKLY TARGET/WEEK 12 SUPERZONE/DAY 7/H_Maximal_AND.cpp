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
        ll n, k;
        cin >> n >> k;
        vector<int> ar(n + 1);
        vector<int> cnt(30 + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            for (int j = 30; j >= 0; j--)
            {
                if ((1 << j) & ar[i])
                    cnt[j]++;
            }
        }
        ll ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int need = n - cnt[i];
            if (need <= k)
            {
                k -= need;
                ans += (1 << i);
            }
        }
        cout << ans << ln;
    }

    return 0;
}