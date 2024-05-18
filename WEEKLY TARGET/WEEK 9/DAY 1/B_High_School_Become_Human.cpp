/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 17 May 2024 ||  23:25:41",
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
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << '=' << ln;
        return 0;
    }
    double x2 = y * log(x);
    double y2 = x * log(y);

    if (x2 > y2)
        cout << ">" << ln;
    else if (x2 < y2)
        cout << "<" << ln;
    else
        cout << "=" << ln;

    return 0;
}