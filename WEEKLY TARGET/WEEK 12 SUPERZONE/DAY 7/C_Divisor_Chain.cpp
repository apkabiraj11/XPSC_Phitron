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
        vector<int> ans;
        ans.push_back(n);
        for (int i = 0; i < 32; i++)
        {
            if ((1 << i) >= n)
                break;
            else
            {
                if ((1 << i) & n)
                {
                    n ^= (1 << i);
                    ans.push_back(n);
                }
            }
        }
        while (n > 1)
        {
            ans.push_back(n / 2);
            n /= 2;
        }
        cout << ans.size() << ln;
        for (auto v : ans)
        {
            cout << v << " ";
        }
        cout << ln;
    }
    return 0;
}