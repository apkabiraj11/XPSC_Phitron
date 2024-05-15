/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 15 May 2024 ||  01:18:19",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
bool prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    bool ok = true;

    if (prime(n))
        cout << 1 << ln;
    else if (n % 2 == 0)
        cout << 2 << ln;
    else if (n % 2 == 1)
    {
        if (prime(n - 2))
            cout << 2 << ln;
        else
            cout << 3 << ln;
    }

    return 0;
}