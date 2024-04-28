/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 28 April 2024 ||  23:12:06",
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
        ll n, b;
        cin >> n >> b;
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int andd = -1;
        for (int i = 0; i < n; i++)
        {
            if ((ar[i] & b) == b)
            {
                andd &= ar[i];
            }
        }
        if (andd == b)
            yes;
        else
            no;
    }

    return 0;
}