/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 03 May 2024 ||  22:54:15",
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
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());

        auto ok = [&](int mid)
        {
            int cnt = 1;
            int l = 0;
            for (int r = 0; r < n; r++)
            {
                if (ar[r] - ar[l] > (2 * mid))
                {
                    cnt++;
                    l = r;
                }
            }
            return cnt <= 3;
        };

        int l = 0;
        int r = 1e9;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ok(mid))

            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << ln;
    }

    return 0;
}