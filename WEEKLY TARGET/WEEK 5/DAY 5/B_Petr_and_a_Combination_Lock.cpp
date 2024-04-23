/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 23 April 2024 ||  18:12:33",
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
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    bool ok = false;
    for (int i = 0; i < (1 << n); i++)
    {
        ll sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                sum += ar[j];
            }
            else
                sum -= ar[j];
        }
        if (sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        yes;
    else
        no;
    return 0;
}