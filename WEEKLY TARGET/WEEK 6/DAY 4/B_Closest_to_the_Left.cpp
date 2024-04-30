/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 30 April 2024 ||  19:13:01",
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
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    while (k--)
    {
        int x;
        cin >> x;
        int ans = -1;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            if (ar[mid] <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans + 1 << ln;
    }

    return 0;
}