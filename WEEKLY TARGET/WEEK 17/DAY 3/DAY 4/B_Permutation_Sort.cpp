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
        vector<int> br(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            br[i] = ar[i];
        }
        sort(br.begin(), br.end());
        if (ar == br)
        {
            cout << 0 << ln;
        }
        else if (ar.back() == n || ar.front() == 1)
        {
            cout << 1 << ln;
        }
        else if (ar.front() == n && ar.back() == 1)
            cout << 3 << ln;
        else
            cout << 2 << ln;
    }

    return 0;
}