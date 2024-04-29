/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 29 April 2024 ||  02:12:45",
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

        int i = 31;
        int bit = 0;
        while (i >= 0)
        {
            if ((x & (1 << i)))
            {
                bit++;
            }
            if (bit == 2)
                break;
            i--;
        }
        int cnt = 0;
        while (i >= 0)
        {
            if ((x & (1 << i)) == 0)
            {
                cnt++;
            }
            i--;
        }

        cout << (1 << cnt) << ln;
    }

    return 0;
}