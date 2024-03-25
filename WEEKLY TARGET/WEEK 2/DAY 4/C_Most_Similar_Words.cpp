/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 25 March 2024 ||  09:15:10",
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
        map<char, int> mp;
        int i = 1;
        for (char j = 'a'; j <= 'z'; j++)
        {
            mp[j] = i;
            i++;
        }

        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int res = 0;
                string org = v[i];
                string com = v[j];
                for (int p = 0; p < org.size(); p++)
                {
                    res += abs(mp[org[p]] - mp[com[p]]);
                }
                ans = min(ans, res);
            }
        }
        cout << ans << ln;
    }

    return 0;
}