/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 07 May 2024 ||  00:52:53",
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
        int n, q;
        cin >> n >> q;
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        ll mn = 40;
        while (q--)
        {
            int x;
            cin >> x;
            if (x < mn)
            {
                mn = x;
                for (int i = 0; i < n; i++)
                {
                    if (ar[i] % (1 << x) == 0)
                    {
                        ar[i] += (1 << (x - 1));
                    }
                }
            }
        }
        for (int v : ar)
        {
            cout << v << " ";
        }
        cout << ln;
    }

    return 0;
}