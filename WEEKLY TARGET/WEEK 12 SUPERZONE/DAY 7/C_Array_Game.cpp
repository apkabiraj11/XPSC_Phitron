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
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        ll mn = ar[0];
        if (k >= 3)
            cout << 0 << ln;
        else if (k == 2)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    ll val = abs(ar[i] - ar[j]);
                    mn = min(mn, val);
                    auto it = lower_bound(ar.begin(), ar.end(), val) - ar.begin();
                    if (it != n)
                        mn = min(mn, abs(ar[it] - val));
                    it--;
                    if (it >= 0)
                        mn = min(mn, abs(ar[it] - val));
                }
            }
            cout << mn << ln;
        }
        else if (k == 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                mn = min(mn, abs(ar[i] - ar[i + 1]));
            }
            cout << mn << ln;
        }
    }
    return 0;
}
// this soltuion is done by the help of youtube so don't be scared of .