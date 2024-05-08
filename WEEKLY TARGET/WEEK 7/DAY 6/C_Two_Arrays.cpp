/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 08 May 2024 ||  01:26:24",
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
        sort(br.begin(), br.end());
        sort(ar.begin(), ar.end());
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int x = abs(ar[i] - br[i]);
            if ((x != 1 && x != 0) || ar[i] > br[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            yes;
        }
        else
            no;
    }

    return 0;
}