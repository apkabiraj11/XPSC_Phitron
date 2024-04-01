/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 April 2024 ||  00:05:53",
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
        int ar[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
            }
        }
        unordered_map<int, int> mp;
        list<int> ans;
        for (int i = 0; i < n - 1; i++)
        {
            pair two;
            pair mx = {0, 0};
            for (int j = 0; j < n; j++)
            {
                mp[ar[j][i]]++;
            }
            for (auto v : mp)
            {
                if (v.second > mx.second)
                {
                    two = mx;
                    mx = v;
                }
                else
                {
                    two = v;
                }
            }
            ans.push_back(mx.first);
            ans.push_back(two.first);
            mp.clear();
        }
        vector<bool> br(n + 1, false);
        for (int v : ans)
        {
            if (br[v] == false)
            {
                cout << v << " ";
                br[v] = true;
            }
        }
        cout << ln;
    }

    return 0;
}