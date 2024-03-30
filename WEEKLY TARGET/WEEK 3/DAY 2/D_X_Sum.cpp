/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 29 March 2024 ||  23:59:47",
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
        int ar[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll tempsum = 0;
            for (int j = 0; j < m; j++)
            {
                tempsum += ar[i][j];
                int tmpi = i - 1;
                int tmpj = j + 1;
                while (tmpi >= 0 && tmpj < m)
                {
                    tempsum += ar[tmpi][tmpj];
                    tmpi--;
                    tmpj++;
                }
                tmpi = i - 1;
                tmpj = j - 1;
                while (tmpi >= 0 && tmpj >= 0)
                {
                    tempsum += ar[tmpi][tmpj];
                    tmpi--;
                    tmpj--;
                }
                tmpi = i + 1;
                tmpj = j - 1;
                while (tmpi < n && tmpj >= 0)
                {
                    tempsum += ar[tmpi][tmpj];
                    tmpi++;
                    tmpj--;
                }
                tmpi = i + 1;
                tmpj = j + 1;
                while (tmpi < n && tmpj < m)
                {
                    tempsum += ar[tmpi][tmpj];
                    tmpi++;
                    tmpj++;
                }
                sum = max(sum, tempsum);
                tempsum = 0;
            }
        }
        cout << sum << ln;
    }

    return 0;
}