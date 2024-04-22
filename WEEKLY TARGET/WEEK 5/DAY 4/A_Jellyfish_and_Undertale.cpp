/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 April 2024 ||  22:49:04",
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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<int> tool(n);
        for (int i = 0; i < n; i++)
        {
            cin >> tool[i];
        }
        sort(tool.begin(), tool.end());
        ll c = b;
        ll sum = 0;
        if (c > 1)
            sum += c - 1;
        c = 1;
        for (int i = 0; i < n; i++)
        {
            c += tool[i];
            if (c > a)
                c = a;
            sum += c - 1;
            c = 1;
        }
        cout << sum + 1 << ln;
    }

    return 0;
}