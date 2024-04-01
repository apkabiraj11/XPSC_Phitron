/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 April 2024 ||  18:28:55",
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
        vector<int> ar(n + 2);

        map<int, multiset<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            mp[ar[i]].insert(i);
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (mp[a].empty() || mp[b].empty())
            {
                no;
            }
            else if (*mp[a].begin() <= *mp[b].rbegin())
            {
                yes;
            }
            else
                no;
        }
    }

    return 0;
}