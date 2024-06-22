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
        vector<int> ar(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        if (mp.size() == 1)
        {
            no;
            continue;
        }
        yes;
        int inx;
        for (int i = 2; i <= n; i++)
        {
            if (ar[1] != ar[i])
            {
                inx = i;
                break;
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (ar[i] != ar[1])
            {
                cout << 1 << " " << i << ln;
            }
            else
            {
                cout << inx << " " << i << ln;
            }
        }
    }

    return 0;
}