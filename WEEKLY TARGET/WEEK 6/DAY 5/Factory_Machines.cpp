/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 May 2024 ||  16:38:46",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, t;
    cin >> n >> t;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    auto ok = [&](ll mid)
    {
        ll target = 0;
        for (int i = 0; i < n; i++)
        {
            target += (mid / ar[i]);
            if (target >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 0, r = 1e18, ans = 0, mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << ln;

    return 0;
}