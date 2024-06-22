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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    int cnt = 0;
    char c;
    bool ok = true;
    for (auto [x, y] : mp)
    {
        if (y <= k)
        {
            k -= y;
        }
        else
        {
            cnt = k;
            c = x;
            ok = false;
            break;
        }
    }
    if (ok)
        return 0;
    for (char ans : s)
    {
        if (ans > c)
            cout << ans;
        else if (ans == c)
        {
            if (cnt <= 0)
            {
                cout << ans;
            }
            cnt--;
        }
    }
    cout << ln;

    return 0;
}