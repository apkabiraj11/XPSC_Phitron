/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 April 2024 ||  09:14:16",
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
        vector<ll> ar;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
            {
                ar.push_back(x);
            }
        }
        vector<ll> check;

        for (int i = 0; i < ar.size(); i++)
        {
            if (ar[i] < 0)
            {
                check.push_back(ar[i]);
                ar[i] = ar[i] * -1;
            }
            else
            {
                if (check.size() != 0)
                {
                    ans++;
                    check.clear();
                }
            }
        }
        if (check.size() != 0)
        {
            ans++;
        }

        ll sum = 0;
        for (int i = 0; i < ar.size(); i++)
        {
            sum += ar[i];
        }
        cout << sum << " " << ans << ln;
    }

    return 0;
}