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
        string st;
        cin >> st;
        int x = 0, y = 0;
        for (auto c : st)
        {
            if (c == 'N')
                y++;
            else if (c == 'S')
                y--;
            else if (c == 'E')
                x++;
            else
                x--;
        }
        if (abs(x) % 2 == 1 || abs(y) % 2 == 1)
        {
            no;
        }
        else if (n == 2 && x == 0 && y == 0)
            no;
        else
        {
            int i = 0, s = 0, w = 1, e = 1;
            string m = "RH";
            string ans = "";
            for (char c : st)
            {
                if (c == 'N')
                {
                    ans += m[i];
                    i = 1 - i;
                }
                else if (c == 'S')
                {
                    ans += m[s];
                    s = 1 - s;
                }
                else if (c == 'W')
                {
                    ans += m[w];
                    w = 1 - w;
                }
                else
                {
                    ans += m[e];
                    e = 1 - e;
                }
            }
            cout << ans << ln;
        }
    }

    return 0;
}
