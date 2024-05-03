/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 03 May 2024 ||  17:46:33",
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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll l = 0, r = 1e18;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;

            ll x = mid - (mid / n);
            if (x >= k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << ln;
    }

    return 0;
}