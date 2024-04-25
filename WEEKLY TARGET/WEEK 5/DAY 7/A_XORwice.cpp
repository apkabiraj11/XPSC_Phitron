/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 25 April 2024 ||  10:00:05",
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
        ll x = b ^ max(a, b);
        ll y = a ^ max(a, b);
        cout << x + y << ln;
    }

    return 0;
}