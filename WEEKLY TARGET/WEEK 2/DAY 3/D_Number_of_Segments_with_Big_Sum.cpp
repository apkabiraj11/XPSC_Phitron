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

    ll n, s;
    cin >> n >> s;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll ans = 0;
    ll r = 0, l = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum >= s)
        {
            while (sum >= s)
            {
                ans += (n - 1) - r + 1;
                sum -= ar[l];
                l++;
            }
        }
        r++;
    }
    cout << ans << ln;

    return 0;
}