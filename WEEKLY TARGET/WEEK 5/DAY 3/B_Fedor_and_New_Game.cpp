/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 21 April 2024 ||  18:36:07",
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> sol(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> sol[i];
    }
    vector<vector<int>> all;
    for (int i = 0; i <= m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back((sol[i] >> j) & 1);
        }
        all.push_back(v);
    }
    int ans = 0;
    vector<int> fador = all.back();
    all.pop_back();
    for (int i = 0; i < all.size(); i++)
    {
        int cnt = 0;
        vector<int> v = all[i];
        for (int j = 0; j < n; j++)
        {
            if (fador[j] != v[j])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << ln;

    return 0;
}