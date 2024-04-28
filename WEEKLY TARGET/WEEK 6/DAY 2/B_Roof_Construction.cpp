/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 28 April 2024 ||  18:46:48",
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
        if (n == 2)
        {
            cout << 0 << " " << 1 << ln;
            continue;
        }
        int cur = n - 1;
        while (cur > 1)
        {
            cout << cur << " ";
            if (__lg(cur - 1) != __lg(cur))
            {
                break;
            }
            cur--;
        }
        for (int i = 0; i < cur; i++)
        {
            cout << i << " ";
        }

        cout << ln;
    }

    return 0;
}