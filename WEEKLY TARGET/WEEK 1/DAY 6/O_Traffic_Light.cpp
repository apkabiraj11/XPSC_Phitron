/*
    APURBA KABIRAJ
    TARGET ->  RED
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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        // vector<int> v;

        if (c == 'g')
        {
            cout << 0 << ln;
            continue;
        }
        int cnt = 0;
        bool flag = false;
        int ans = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c && flag == false)
            {
                flag = true;
                cnt = 0;
            }
            if (s[i] == 'g' && flag)
            {
                ans = max(ans, cnt);
                flag = false;
                cnt = 0;
            }
            cnt++;
        }
        cout << ans << ln;
    }

    return 0;
}