/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 25 April 2024 ||  20:11:43",
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
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        ll oro = ar[0];
        for (int i = 1; i < n; i++)
        {
            oro |= ar[i];
        }
        cout << oro << ln;
    }

    return 0;
}