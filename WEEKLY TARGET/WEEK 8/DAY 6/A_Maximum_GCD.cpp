/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 16 May 2024 ||  22:03:06",
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
        if (n % 2 == 0)
        {
            cout << __gcd(n, n / 2) << ln;
        }
        else
        {
            int x = n - 1;
            cout << __gcd(x, x / 2) << ln;
                }
    }
    return 0;
}