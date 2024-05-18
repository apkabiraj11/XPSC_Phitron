/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 18 May 2024 ||  22:19:52",
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
        int x, y;
        cin >> x >> y;
        if (y <= 3)
        {
            cout << -1 << ln;
            continue;
        }
        if (y % 2 == 0)
        {
            int val = y / 2;
            cout << val << " " << val << ln;
            continue;
        }
        if (y % 2 == 1 && y - x >= 2)
        {
            int val = (y - 1) / 2;
            cout << val << " " << val << ln;
            continue;
        }
        if (y % 2 == 1 && x % 2 == 0)
        {
            int val = x / 2;
            cout << val << " " << val << ln;
            continue;
        }
        if (x == y)
        {
            int val = 0;
            for (int i = 2; i * i <= x; i++)
            {
                if (x % i == 0)
                {
                    val = i;
                    break;
                }
            }
            if (val == 0)
            {
                cout << -1 << ln;
            }
            else
                cout << val << " " << x - val << ln;
        }
    }

    return 0;
}