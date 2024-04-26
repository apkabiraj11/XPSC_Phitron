/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 April 2024 ||  12:08:23",
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
        vector<int> ar(n + 5);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        vector<int> bit(32);
        for (int i = 0; i < n; i++)
        {
            int x = ar[i];
            for (int j = 0; j < 32; j++)
            {
                if ((ar[i] >> j) & 1)
                {
                    bit[j]++;
                }
            }
        }
        int gcd = 0;
        for (int i = 0; i < 32; i++)
        {
            gcd = __gcd(gcd, bit[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (gcd % i == 0)
                cout << i << " ";
        }
        cout << ln;
    }

    return 0;
}