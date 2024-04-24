/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 24 April 2024 ||  16:46:06",
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
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int l = 0, r = 0;

        int ans = 0;
        int cnt = 0;
        while (r < n)
        {
            if (ar[r] % 2 == 1)
            {
                cnt++;
            }
            if (r - l + 1 == k)
            {
                if (cnt > 0)
                {
                    ans++;
                }
            }
            else if (r - l + 1 > k)
            {
                if (ar[l] % 2 == 1)
                    cnt--;
                l++;
                if (r - l + 1 == k)
                {
                    if (cnt > 0)
                    {
                        ans++;
                    }
                }
            }
            r++;
        }
        cout << ans << ln;
    }

    return 0;
}