/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 27 March 2024 ||  18:48:24",
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
    int n, s;
    cin >> n >> s;
    int ans = 0;
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (s - (i + j) <= n && s - (i + j) >= 0)
            {
                ans++;
            }
        }
    }

    cout << ans << ln;

    return 0;
}