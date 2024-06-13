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
        ll n;
        cin >> n;
        vector<pair> ar;
        ordered_set<int> st;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            ar.push_back({x, y});
            st.insert(y);
        }
        sort(ar.begin(), ar.end());
        for (int i = 0; i < n; i++)
        {
            int val = ar[i].second;
            int get = st.order_of_key(val);
            ans += get;
            st.erase(val);
        }
        //
        cout << ans << ln;
    }

    return 0;
}