/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 23 May 2024 ||  19:36:22",
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        vector<ll> divs;
        for (ll i = 1; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                divs.push_back(i);
                if (l / i != i)
                    divs.push_back(l / i);
            }
        }
        // for (ll v : divs)
        // {
        //     cout << v << " ";
        // }
        // cout << ln;
        vector<ll> x;
        for (ll i = 0; i <= 20; i++)
        {
            ll v = pow(a, i);
            if (v <= 1e6)
            {
                x.push_back(v);
            }
            else
                break;
        }
        vector<ll> y;
        for (ll i = 0; i <= 20; i++)
        {
            ll v = pow(b, i);
            if (v <= 1e6)
            {
                y.push_back(v);
            }
            else
                break;
        }

        // sort(divs.begin(), divs.end());
        ll cnt = 0;
        for (ll i = 0; i < (ll)divs.size(); i++)
        {
            bool got = false;
            for (ll j = 0; j < (ll)x.size(); j++)
            {
                for (ll k = 0; k < (ll)y.size(); k++)
                {
                    if ((divs[i] * x[j] * y[k]) == l)
                    {
                        cnt++;
                        got = true;
                        break;
                    }
                }
                if (got)
                    break;
            }
        }
        cout << cnt << ln;
    }

    return 0;
}