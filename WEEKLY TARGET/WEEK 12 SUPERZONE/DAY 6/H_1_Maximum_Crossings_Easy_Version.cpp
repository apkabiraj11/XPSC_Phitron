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
        int n;
        cin >> n;
        vector<pair> ar(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ar[i] = {x, i};
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            int ai = ar[i].second;
            int av = ar[i].first;
            for (int j = i + 1; j <= n; j++)
            {
                int bi = ar[j].second;
                int bv = ar[j].first;
                if (ai < bi && av >= bv)
                    cnt++;
                else if (ai > bi && av <= bv)
                    cnt++;
            }
        }
        cout << cnt << ln;
    }

    return 0;
}
