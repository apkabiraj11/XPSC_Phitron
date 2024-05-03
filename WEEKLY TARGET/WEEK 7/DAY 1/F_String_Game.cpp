/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 03 May 2024 ||  11:12:46",
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
    string t, p;
    cin >> t >> p;
    int n = t.size();
    int m = p.size();

    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    auto ok = [&](int mid)
    {
        vector<bool> del(n + 1);
        for (int i = 0; i < mid; i++)
        {
            del[ar[i]] = true;
        }

        bool found = false;
        int i = 0;
        int j = 0;
        while (i < n)
        {
            if (t[i] == p[j] && !del[i + 1])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0;
    int r = n;
    int ans = 0;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << ln;

    return 0;
}