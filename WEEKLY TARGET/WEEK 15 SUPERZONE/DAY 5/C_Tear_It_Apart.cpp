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
        string s;
        cin >> s;
        int n = s.size();
        int cnt = 0;
        int mn = INT_MAX;
        int mx;
        for (char i = 'a'; i <= 'z'; i++)
        {
            cnt = 0;
            mx = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] != i)
                {
                    cnt++;
                    mx = max(mx, cnt);
                }
                else
                    cnt = 0;
            }
            mn = min(mx, mn);
                }
        if (mn == 0)
            cout << 0 << ln;
        else
        {
            cnt = 0;
            while (mn != 1)
            {
                mn /= 2;
                cnt++;
            }
            cout << cnt + mn << ln;
        }
    }

    return 0;
}