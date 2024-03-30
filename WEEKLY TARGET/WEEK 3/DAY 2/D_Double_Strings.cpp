/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 30 March 2024 ||  10:43:32",
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
        vector<string> ar;
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ar.push_back(s);
            mp[s] = true;
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            string x = ar[i];
            int m = x.size();
            for (int j = 1; j < m; j++)
            {
                string left = x.substr(0, j);
                string right = x.substr(j, m - 1);
                if (mp[left] && mp[right])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                cout << 1;
            else
                cout << 0;
            flag = false;
        }
        cout << ln;
    }

    return 0;
}