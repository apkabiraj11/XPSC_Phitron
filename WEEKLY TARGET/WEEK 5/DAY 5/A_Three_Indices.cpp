/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 23 April 2024 ||  00:43:00",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
void solve(vector<int> ar, int n)
{
    for (int j = 2; j <= n - 1; j++)
    {
        int a = -1, b = -1, c = -1;
        b = j;
        for (int i = j - 1; i >= 1; i--)
        {
            if (ar[j] > ar[i])
            {
                a = i;
            }
        }
        for (int k = j + 1; k <= n; k++)
        {
            if (ar[j] > ar[k])
            {
                c = k;
            }
        }
        if (a != -1 && b != -1 && c != -1)
        {
            yes;
            cout << a << " " << b << " " << c << ln;
            return;
        }
    }
    no;
    return;
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
        vector<int> ar(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        solve(ar, n);
    }

    return 0;
}