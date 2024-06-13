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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ordered_set<int> st;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ll to_n = st.order_of_key(n + 1);
            ll to_x = st.order_of_key(x);
            ans += abs(to_n - to_x);
            st.insert(x);
        }
        cout << ans << ln;
    }

    return 0;
}