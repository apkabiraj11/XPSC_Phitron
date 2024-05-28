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

    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int r = 0, l = 0;
    ordered_set<pair> trk;
    while (r < n)
    {
        trk.insert({ar[r], r});
        int pos;
        if (r - l + 1 == k)
        {
            pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }
            auto it = trk.find_by_order(pos);
            cout << it->first << " ";
            trk.erase({ar[l], l});
            l++;
        }
        r++;
    }

    return 0;
}