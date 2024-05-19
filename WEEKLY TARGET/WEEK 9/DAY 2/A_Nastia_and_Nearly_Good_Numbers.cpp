/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 19 May 2024 ||  13:17:22",
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
        ll x, y;
        cin >> x >> y;

        if (y > 2)
        {
            yes;
            ll ans1 = x * y;
            ll ans2 = ans1 - x;
            cout << x << " " << ans2 << " ";
            cout << ans1 << ln;
        }
        else if (y != 1)
        {
            yes;
            ll ans1 = 2 * x * y;
            ll ans2 = ans1 - x;
            cout << x << " " << ans2 << " ";
            cout << ans1 << ln;
        }
        else
        {
            no;
        }
    }

    return 0;
}