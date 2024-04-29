/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 29 April 2024 ||  01:25:18",
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
        int x;
        cin >> x;
        int bit = -1;
        while (1 << bit <= x)
        {
            bit++;
        }
        bit--;
        int msb = 1 << bit;
        int a = msb;
        int b = a ^ x;
        cout << b << " " << a << ln;
    }

    return 0;
}