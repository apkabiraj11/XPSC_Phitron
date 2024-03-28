/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 March 2024 ||  13:53:22",
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

    ll n, k;
    cin >> n >> k;
    vector<ll> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll ans = 0;
    ll r = 0, l = 0;
    map<ll, ll> cp;
    while (r < n)
    {
        cp[ar[r]]++;
        if (cp.size() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (cp.size() > k)
            {
                cp[ar[l]]--;
                if (cp[ar[l]] == 0)
                {
                    cp.erase(ar[l]);
                }
                l++;
            }
            ans += (r - l + 1);
        }
        r++;
    }

    cout << ans << ln;

    return 0;
}