/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 27 May 2024 ||  19:41:12",
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

        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i % 2 == 0)
                    cout << (n / 2 + i / 2) * m + j + 1 << ' ';
                else
                    cout << (i / 2) * m + j + 1 << ' ';
            }
            cout << ln;
        }
    }

    return 0;
}