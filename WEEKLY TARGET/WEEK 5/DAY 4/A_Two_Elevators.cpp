/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 April 2024 ||  10:24:01",
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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << 1 << ln;
            continue;
        }
        if (b == 1)
        {
            if (b < c)
            {
                ll x = abs(b - c);
                x += abs(1 - c);
                a = abs(1 - a);
                if (x == a)
                    cout << 3 << ln;
                else if (x > a)
                    cout << 1 << ln;
                else
                    cout << 2 << ln;
            }
            else
            {
                ll x = abs(1 - b);
                a = abs(1 - a);
                if (x == a)
                    cout << 3 << ln;
                else if (x > a)
                    cout << 1 << ln;
                else
                    cout << 2 << ln;
            }
        }
        else
        {
            if (b < c)
            {
                ll x = abs(b - c);
                x += abs(1 - c);
                a = abs(1 - a);
                if (x == a)
                    cout << 3 << ln;
                else if (x > a)
                    cout << 1 << ln;
                else
                    cout << 2 << ln;
            }
            else
            {
                ll x = abs(1 - b);
                a = abs(1 - a);
                if (x == a)
                    cout << 3 << ln;
                else if (x > a)
                    cout << 1 << ln;
                else
                    cout << 2 << ln;
            }
        }
    }

    return 0;
}