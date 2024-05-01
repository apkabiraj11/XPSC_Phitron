/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 May 2024 ||  10:35:42",
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
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    int q;
    cin >> q;
    while (q--)
    {
        int left, right;
        cin >> left >> right;
        auto it1 = lower_bound(ar.begin(), ar.end(), left);
        int l = it1 - ar.begin();
        auto it2 = upper_bound(ar.begin(), ar.end(), right);
        int r = it2 - ar.begin();
        int ans = r - l;
        cout << ans << " ";
    }

    return 0;
}