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
    ll ans = 0;
    int r = 0, l = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s)
            {
                sum -= ar[l];
                l++;
            }
            ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << ln;

    return 0;
}