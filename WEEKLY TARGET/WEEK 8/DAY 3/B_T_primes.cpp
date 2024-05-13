/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 12 May 2024 ||  23:46:56",
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

    // set<ll> st;
    ll v = 1e6;
    vector<bool> prime(v + 1, true);
    for (ll i = 2; i <= v; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j <= v; j += i)
            {
                prime[j] = false;
            }
        }
    }
    // for (int i = 2; i <= prime.size(); i++)
    // {
    //     if (prime[i])
    //         st.insert(i);
    // }
    // for (auto v : st)
    // {
    //     cout << v << " ";
    // }
    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        ll val = sqrtl(x);
        // cout << val << " ";
        if (x != 1 && val * val == x && prime[val])
            yes;
        else
            no;
    }

    return 0;
}