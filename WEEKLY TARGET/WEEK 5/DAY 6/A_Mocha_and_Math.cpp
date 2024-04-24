/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 24 April 2024 ||  15:51:08",
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
        vector<int> ar(n + 9);
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        int x = ar[1];
        for (int i = 2; i <= n; i++)
        {
            x &= ar[i];
        }
        cout << x << ln;
    }

    return 0;
}