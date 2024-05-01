/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 May 2024 ||  09:56:03",
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
    vector<ll> pref(n);
    pref[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }
    // cout << pref[n - 1];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(pref.begin(), pref.end(), x);
        int ind = it - pref.begin();
        cout << ind + 1 << ln;
    }

    return 0;
}