/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 04 May 2024 ||  23:55:48",
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
        vector<int> pos;
        vector<int> neg;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
            {
                neg.push_back(abs(x));
            }
            else
                pos.push_back(x);
            mx = max(mx, abs(x));
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());
        ll sum = 0;
        for (int i = pos.size() - 1; i >= 0; i -= k)
        {
            sum += 2 * pos[i];
        }
        for (int i = neg.size() - 1; i >= 0; i -= k)
        {
            sum += 2 * neg[i];
        }
        sum -= mx;
        cout << sum << ln;
    }

    return 0;
}