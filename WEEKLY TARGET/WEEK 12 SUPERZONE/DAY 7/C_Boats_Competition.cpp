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
        sort(ar.begin(), ar.end());
        int ans = -1;
        for (int sum = 1; sum <= 100; sum++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                if (ar[l] + ar[r] > sum)
                    r--;
                else if (ar[l] + ar[r] < sum)
                    l++;
                else
                {
                    l++;
                    r--;
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << ln;
    }

    return 0;
}