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
        int n, m, w;
        cin >> n >> m >> w;
        string s;
        cin >> s;
        int next = m - 1;
        int impos = 0;
        int water = 0;
        for (auto x : s)
        {
            if (x == 'L')
                next = m;
            else if (x == 'W' && next <= 0)
                w--;
            else if (x == 'C' && next <= 0)
                impos++;
            next--;
        }
        if (w < 0)
            impos++;
        if (impos)
            no;
        else
            yes;
    }
    return 0;
}
