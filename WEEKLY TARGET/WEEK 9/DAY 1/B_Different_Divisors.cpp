/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 18 May 2024 ||  17:31:03",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<ll, ll>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<bool> prime(1e5 + 1, true);
    for (ll i = 2; i * i <= 1e5 + 1; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j <= 1e5 + 1; j += i)
            {
                prime[j] = false;
            }
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll d;
        cin >> d;
        // vector<int> v;
        int val1 = 0;
        int val2 = 0;

        for (int i = d + 1; i <= 1e5; i++)
        {
            if (prime[i])
            {
                val1 = i;
                break;
            }
        }
        for (int i = val1 + d; i <= 1e5; i++)
        {
            if (prime[i])
            {
                val2 = i;
                break;
            }
        }

        cout << val1 * val2 << ln;
    }

    return 0;
}