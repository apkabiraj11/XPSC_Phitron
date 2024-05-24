/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 24 May 2024 ||  18:31:28",
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
        ll a, b;
        cin >> a >> b;
        map<ll, ll> mp;
        for (ll i = 2; i * i <= b; i++)
        {
            if (b % i == 0)
            {
                while (b % i == 0)
                {
                    mp[i]++;
                    b /= i;
                }
            }
        }
        if (b > 1)
            mp[b]++;
        int cnt = 0;
        for (auto [x, y] : mp)
        {
            if (a % x == 0)
            {
                cnt++;
            }
        }
        if (cnt == mp.size())
        {
            cout << "Yes" << ln;
        }
        else
            cout << "No" << ln;
    }

    return 0;
}