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
        vector<int> ar;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar.push_back(x);
        };
        sort(ar.begin(), ar.end());
        if (n == 2)
        {
            cout << ar[0] << " " << ar[1] << ln;
            continue;
        }
        ll val = INT_MAX;
        int idx;
        for (int i = 0; i < n - 1; i++)
        {
            int minus = abs(ar[i] - ar[i + 1]);
            if (minus < val)
            {
                val = minus;
                idx = i;
            }
        }
        for (int i = idx + 1; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        for (int i = 0; i <= idx; i++)
        {
            cout << ar[i] << " ";
        }

        cout << ln;
    }

    return 0;
}