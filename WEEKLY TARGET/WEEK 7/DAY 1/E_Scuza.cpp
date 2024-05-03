/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 02 May 2024 ||  23:37:03",
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
        int n, q;
        cin >> n >> q;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        vector<ll> pref(n);
        pref[0] = ar[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + ar[i];
        }
        vector<int> mx(n);
        mx[0] = ar[0];
        for (int i = 1; i < n; i++)
        {
            mx[i] = max(mx[i - 1], ar[i]);
        }

        while (q--)
        {
            int x;
            cin >> x;

            int l = 0;
            int r = n - 1;
            ll ans = 0;
            while (l <= r)
            {
                int mid = (l + r) / 2;

                if (mx[mid] <= x)
                {
                    ans = pref[mid];
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            cout << ans << " ";
        }
        cout << ln;
    }

    return 0;
}