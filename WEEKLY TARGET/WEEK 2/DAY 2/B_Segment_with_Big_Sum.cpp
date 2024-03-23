/*
    APURBA KABIRAJ
    TARGET ->  RED
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
    ll n, s;
    cin >> n >> s;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll ans = INT_MAX;
    ll r = 0, l = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum >= s)
        {
            while (sum >= s)
            {
                ans = min(ans, r - l + 1);
                sum -= ar[l];
                l++;
            }
        }
        r++;
    }
    (ans != INT_MAX)
        ? cout << ans << ln
        : cout << -1 << ln;

    return 0;
}