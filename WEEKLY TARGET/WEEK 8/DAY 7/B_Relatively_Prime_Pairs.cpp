/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 17 May 2024 ||  23:04:03",
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
    ll a, b;
    cin >> a >> b;
    vector<ll> odd;
    vector<ll> even;
    for (ll i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
            odd.push_back(i);
    }
    if (even.size() != odd.size())
    {
        no;
    }
    else
    {
        yes;
        for (ll i = 0; i < odd.size(); i++)
        {
            cout << odd[i] << " " << even[i] << ln;
        }
    }

    return 0;
}