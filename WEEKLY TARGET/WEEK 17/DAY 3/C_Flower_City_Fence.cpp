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
        vector<ll> ar(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> ar[i];
        if (ar[1] != n)
        {
            no;
            continue;
        }
        vector<int> flip(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            flip[ar[i]]++;
        }
        reverse(flip.begin(), flip.end());
        for (int i = 1; i <= n; i++)
            flip[i] = flip[i] + flip[i - 1];
        reverse(flip.begin(), flip.end());
        bool ans = true;
        for (int i = 1; i <= n; i++)
        {
            if (ar[i] != flip[i])
            {
                ans = false;
                break;
            }
        }
        if (ans)
            yes;
        else
            no;
    }

    return 0;
}