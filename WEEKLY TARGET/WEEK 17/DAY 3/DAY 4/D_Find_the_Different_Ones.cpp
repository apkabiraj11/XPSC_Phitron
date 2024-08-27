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
        vector<int> pos(n);
        pos[n - 1] = n;
        for (int i = n - 2; i >= 0; i--)
        {
            if (ar[i] == ar[i + 1])
                pos[i] = pos[i + 1];
            else
                pos[i] = i + 1;
        }
        /*
        this problem was solved by the help of tutorial from youtube
        */
        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if (pos[l] <= r)
            {
                cout << l + 1 << " " << pos[l] + 1 << ln;
            }
            else
                cout << -1 << " " << -1 << ln;
        }
    }

    return 0;
}