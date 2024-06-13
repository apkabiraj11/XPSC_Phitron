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

    ll n, k;
    cin >> n >> k;
    vector<ll> ar(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll l = 0, r = 0;
    ordered_set<pair> st;
    bool ok = true;
    ll ans = 0;
    ll prev = 0;
    ll last = 0;
    while (r < n)
    {
        st.insert({ar[r], r});
        if (r - l + 1 == k)
        {
            ll pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }
            auto it = st.find_by_order(pos);
            ll madian = it->first;
            if (ok)
            {
                for (auto val : st)
                {
                    ans += abs(madian - val.first);
                }
                ok = false;
                cout << ans << " ";
            }
            else
            {
                ans -= abs(prev - last);
                ans += abs(madian - ar[r]);
                if (k % 2 == 0)
                    ans -= (madian - prev);
                cout << ans << " ";
            }

            prev = madian;
            last = ar[l];
            st.erase({ar[l], l});
            l++;
        }
        r++;
    }

    return 0;
}