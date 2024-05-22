/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 May 2024 ||  15:33:55",
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
    int n;
    cin >> n;
    int mx = INT_MIN;
    vector<int> ar;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        ar.push_back(x);
        mx = max(mx, x);
    }
    ll initial = 1LL * mx * n;
    ll baki = initial - sum;

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == 0)
        {
            x = mx - ar[i];
        }
        else
        {
            x = __gcd(x, (mx - ar[i]));
        }
    }
    cout << baki / x << " " << x << ln;

    return 0;
}