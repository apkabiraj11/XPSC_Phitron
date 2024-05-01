/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 May 2024 ||  17:37:36",
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
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    ll l = 0, r = 2e9, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            if (ar[i] < mid)
            {
                cnt += (mid - ar[i]);
            }
        }
        if (cnt <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << ln;

    return 0;
}