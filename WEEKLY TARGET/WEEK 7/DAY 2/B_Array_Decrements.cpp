/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 04 May 2024 ||  18:51:52",
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
        vector<int> ar(n);
        vector<int> br(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> br[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (br[i] != 0)
                mn = min(mn, ar[i] - br[i]);
        }
        if (mn < 0)
        {
            no;
            continue;
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (br[i] != 0)
            {
                int x = ar[i] - br[i];
                if (x != mn)
                {
                    ok = false;
                    break;
                }
            }
            else if (br[i] == 0)
            {
                int x = ar[i] - br[i];
                if (x > mn)
                {
                    ok = false;
                    break;
                }
            }
        }
        (ok) ? yes : no;
    }

    return 0;
}