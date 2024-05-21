/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 21 May 2024 ||  22:57:54",
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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= ar[i]; j++)
            {
                if (ar[i] % j == 0)
                {
                    while (ar[i] % j == 0)
                    {
                        mp[j]++;
                        ar[i] /= j;
                    }
                }
            }
            if (ar[i] > 1)
                mp[ar[i]]++;
        }
        bool ok = true;
        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            yes;
        else
            no;
    }

    return 0;
}