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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        map<pair, int> ab;
        map<pair, int> bc;
        map<pair, int> ac;

        map<vector<int>, int> abc;
        map<vector<int>, int> bca;
        map<vector<int>, int> acb;
        ll ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int a = ar[i];
            int b = ar[i + 1];
            int c = ar[i + 2];

            ab[{a, b}]++;
            bc[{b, c}]++;
            ac[{a, c}]++;

            abc[{a, b, c}]++;
            bca[{b, c, a}]++;
            acb[{a, c, b}]++;

            ans += ab[{a, b}] - abc[{a, b, c}];
            ans += bc[{b, c}] - bca[{b, c, a}];
            ans += ac[{a, c}] - acb[{a, c, b}];
        }
        cout << ans << ln;
    }

    return 0;
}