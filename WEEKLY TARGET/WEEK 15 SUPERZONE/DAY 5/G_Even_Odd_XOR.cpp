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
        ll ans = 0;
        for (int i = 1; i <= n - 3; i++)
        {
            cout << i << " ";
            ans ^= i;
        }
        ans ^= (1 << 29);
        ans ^= (1 << 30);
        cout << (1 << 29) << " " << (1 << 30) << " " << ans << ln;
    }

    return 0;
}