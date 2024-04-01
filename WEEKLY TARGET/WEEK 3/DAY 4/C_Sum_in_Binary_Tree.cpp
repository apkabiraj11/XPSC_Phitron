/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 April 2024 ||  15:24:52",
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
        ll n;
        cin >> n;
        ll sum = 0;
        while (n > 0)
        {
            sum += n;
            n = n / 2;
        }
        cout << sum << ln;
    }

    return 0;
}