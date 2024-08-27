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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> ar(n), br(m);
        set<int> up, down;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] <= k)
                up.insert(ar[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> br[i];
            if (br[i] <= k)
                down.insert(br[i]);
        }
        if (up.size() < k / 2 || down.size() < k / 2)
        {
            no;
            continue;
        }
        for (auto x : down)
        {
            up.insert(x);
        }
        if ((int)up.size() == k)
            yes;
        else
            no;
    }

    return 0;
}