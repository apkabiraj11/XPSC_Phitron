/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 14 May 2024 ||  21:47:29",
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
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll tile_a = n / a;
    ll tile_b = n / b;

    ll lcm = ((a / __gcd(a, b)) * b);
    ll can = n / lcm;
    // cout << lcm << " " << can;
    if (p >= q)
    {
        tile_b -= can;
    }
    else
        tile_a -= can;

    cout << (tile_a * p) + (tile_b * q) << ln;

    return 0;
}