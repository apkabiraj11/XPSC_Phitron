/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 May 2024 ||  10:33:25",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
bool prime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            bool found = false;
            for (int j = i + 1; j >= 2; j--)
            {
                if (x % j != 0)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                ok = false;
            }
        }
        if (ok)
            yes;
        else
            no;
    }

    return 0;
}