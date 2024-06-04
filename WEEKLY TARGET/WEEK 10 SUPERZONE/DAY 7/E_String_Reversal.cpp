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
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    map<char, vector<int>> pos_r, pos_s;

    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }
    vector<int> permu(n);
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 0; i < pos_s[c].size(); i++)
        {
            permu[pos_r[c][i]] = pos_s[c][i];
        }
    }

    ordered_set<int> st;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += st.order_of_key(permu[i]);
        st.insert(permu[i]);
    }
    cout << ans << ln;

    return 0;
}