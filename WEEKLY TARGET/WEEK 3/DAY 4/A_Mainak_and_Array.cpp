/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 April 2024 ||  15:49:28",
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
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int sum = ar[n - 1] - ar[0];
        for (int i = 1; i < n; i++)
        {
            sum = max(sum, ar[i] - ar[0]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            sum = max(sum, ar[n - 1] - ar[i]);
        }
        for (int i = 1; i < n; i++)
        {
            sum = max(sum, ar[i - 1] - ar[i]);
        }
        cout << sum << ln;
    }

    return 0;
}