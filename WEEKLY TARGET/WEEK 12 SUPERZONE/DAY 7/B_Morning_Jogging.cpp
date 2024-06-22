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
        int n, m;
        cin >> n >> m;
        vector<int> ar[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                ar[i].push_back(x);
            }
            sort(ar[i].begin(), ar[i].end());
        }
        vector<int> ans[n + 2];
        for (int i = 0; i < m; i++)
        {
            int mn = INT_MAX;
            int idx = -1;
            for (int j = 0; j < n; j++)
            {
                if (ar[j][0] < mn)
                {
                    mn = ar[j][0];
                    idx = j;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (j == idx)
                {
                    ans[j].push_back(ar[j][0]);
                    ar[j].erase(ar[j].begin());
                }
                else
                {
                    ans[j].push_back(ar[j].back());
                    ar[j].pop_back();
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << ln;
        }
    }

    return 0;
}