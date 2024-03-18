#include <bits/stdc++.h>
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
        string s[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[s[i][j]] == 1)
                {
                    ans += 3;
                }
                if (mp[s[i][j]] == 2)
                {
                    ans++;
                }
            }
            cout << ans << " ";
            ans = 0;
        }
        cout << endl;
    }

    return 0;
}