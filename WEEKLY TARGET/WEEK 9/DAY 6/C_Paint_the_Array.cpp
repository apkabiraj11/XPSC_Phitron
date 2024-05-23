/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 23 May 2024 ||  22:15:35",
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
        vector<ll> ar(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        ll two = 0;
        ll three = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                if (two == 0)
                {
                    two = ar[i];
                }
                else
                    two = __gcd(two, ar[i]);
            }
            else
            {
                if (three == 0)
                {
                    three = ar[i];
                }
                else
                    three = __gcd(three, ar[i]);
            }
            // cout << three << " " << two << ln;
        }
        bool evn = true;
        bool odd = true;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                if (two > 1 && ar[i] % two == 0)
                {
                    evn = false;
                }
            }
            else
            {
                if (three > 1 && ar[i] % three == 0)
                {
                    odd = false;
                }
            }
        }
        if (two > 1 && evn)
        {
            cout << two << ln;
        }
        else if (three > 1 && odd)
        {
            cout << three << ln;
        }
        else
            cout << 0 << ln;
    }

    return 0;
}