/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 11 May 2024 ||  20:40:04",
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

    vector<ll> ar;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ar.push_back(i);
            if (n / i != i)
            {
                ar.push_back(n / i);
            }
        }
    }

    sort(ar.begin(), ar.end());
    if (k > ar.size())
        cout << -1 << ln;
    else
        cout << ar[k - 1] << ln;

    return 0;
}