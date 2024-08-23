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

    int n;
    cin >> n;
    vector<ll> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    if (ar[0] != 0)
    {
        cout << 1 << ln;
        return 0;
    }
    set<ll> st;
    st.insert(0);
    for (int i = 1; i < n; i++)
    {
        auto it1 = st.find(ar[i]);
        auto it2 = st.find(ar[i] - 1);
        if (it1 == st.end() && it2 == st.end())
        {
            cout << i + 1 << ln;
            return 0;
        }
        if (it1 != st.end())
            st.insert(ar[i]);
        if (it2 != st.end())
            st.insert(ar[i]);
    }
    cout << -1 << ln;

    return 0;
}