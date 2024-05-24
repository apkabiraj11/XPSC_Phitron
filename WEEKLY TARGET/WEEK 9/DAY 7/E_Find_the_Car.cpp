/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 24 May 2024 ||  19:13:45",
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
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> ar(k + 1), br(k + 1);
        for (ll i = 1; i <= k; i++)
        {
            cin >> ar[i];
        }
        for (ll i = 1; i <= k; i++)
        {
            cin >> br[i];
        }
        while (q--)
        {
            ll d;
            cin >> d;

            auto it = lower_bound(ar.begin(), ar.end(), d);
            ll x = it - ar.begin();
            if (ar[x] == d)
            {
                cout << br[x] << " ";
            }
            else
            {
                ll gece = ar[x] - ar[x - 1];
                ll time = br[x] - br[x - 1];

                ll ans = br[x - 1] + ((d - ar[x - 1]) * time) / gece;
                cout << ans << " ";
            }
            // cout << ln;
        }
        cout << ln;
    }

    return 0;
}