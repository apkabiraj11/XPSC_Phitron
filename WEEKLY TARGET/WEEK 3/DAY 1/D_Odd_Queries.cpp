/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 29 March 2024 ||  13:15:49",
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
        vector<int> ar(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        vector<ll> pref(n + 1);
        pref[1] = ar[1];
        for (int i = 2; i <= n; i++)
        {
            pref[i] = ar[i] + pref[i - 1];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum = pref[l - 1] + (pref[n] - pref[r]);
            int inx = r - l + 1;
            sum += (inx * k);
            if (sum % 2 == 0)
                no;
            else
                yes;
        }
    }

    return 0;
}