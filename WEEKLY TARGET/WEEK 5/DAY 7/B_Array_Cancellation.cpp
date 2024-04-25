/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 25 April 2024 ||  20:42:07",
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
        int n;
        cin >> n;
        ll ans = 0, temp = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            temp += x;
            ans = min(ans, temp);
        }
        cout << -ans << ln;
    }
    return 0;
}