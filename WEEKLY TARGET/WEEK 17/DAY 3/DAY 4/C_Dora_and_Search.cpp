#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ln '\n'
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
        vector<int> ar(n), br;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            br.push_back(ar[i]);
        }
        sort(br.begin(), br.end());
        if (ar == br || n <= 3)
        {
            cout << -1 << ln;
            continue;
        }
        int l = 0, r = n - 1;
        int mn = 1, mx = n;
        while (l <= r)
        {
            if (ar[l] == mn)
            {
                l++;
                mn++;
            }
            else if (ar[l] == mx)
            {
                l++;
                mx--;
            }
            else if (ar[r] == mn)
            {
                r--;
                mn++;
            }
            else if (ar[r] == mx)
            {
                r--;
                mx--;
            }
            else
            {
                break;
            }
        }
        if (l <= r)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}