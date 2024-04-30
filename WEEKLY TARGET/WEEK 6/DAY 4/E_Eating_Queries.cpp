/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 30 April 2024 ||  22:46:55",
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
        int n, q;
        cin >> n >> q;
        vector<int> ar(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }
        sort(ar.begin(), ar.end(), greater<int>());
        vector<ll> pre(n);
        pre[0] = ar[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + ar[i];
        }
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(pre.begin(), pre.end(), x);
            int ans = it - pre.begin();
            if (it == pre.end() || x > *it)
                cout << -1 << ln;
            else
                cout << ans + 1 << ln;
        }
    }

    return 0;
}