/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 12 May 2024 ||  08:55:27",
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
    if (n % 2 == 0)
    {
        int x = n / 2;
        cout << x << ln;
        for (int i = 1; i <= x; i++)
        {
            cout << 2 << " ";
        }
        return 0;
    }
    n -= 3;
    int v = n / 2;
    cout << v + 1 << ln;
    for (int i = 1; i <= v; i++)
    {
        cout << 2 << " ";
    }
    cout << 3 << " ";

    return 0;
}