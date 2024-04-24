/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 24 April 2024 ||  18:12:52",
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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        if (s % n <= b && a * n + b >= s)
            yes;
        else
            no;
    }

    return 0;
}